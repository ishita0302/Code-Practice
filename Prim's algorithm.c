#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#define V 5
  
int minKey(int key[], bool mstSet[]);
int print(int parent[], int graph[V][V]);
void prims(int graph[V][V]);

int main()
{
    int graph[V][V] = { { 0, 5, 0, 7, 0 },
                        { 5, 0, 2, 9, 3 },
                        { 0, 2, 0, 0, 5 },
                        { 7, 9, 0, 0, 4 },
                        { 0, 3, 5, 4, 0 } };
    prims(graph);
    return 0;
}

int minKey(int key[], bool set[])
{
    int min = INT_MAX, index;
    for (int v = 0; v < V; v++)
        if (set[v] == false && key[v] < min)
            min = key[v], index = v;
  
    return index;
}

int print(int parent[], int graph[V][V])
{
    int sum=0,i;
    printf("Edge \tWeight\n");
    for ( i = 1; i < V; i++)
    {
        printf("%d - %d \t%d \n", parent[i], i, graph[i] [parent[i]]);
        sum=sum+graph[i] [parent[i]];
    }
    if(i==V)
        printf("\nminimum cost is: %d",sum);    
}

void prims(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool set[V];
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, set[i] = false;
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < V - 1; count++) 
    {
        int u = minKey(key, set);
        set[u] = true;
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && set[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
        }
    }
  
    print(parent, graph);
}