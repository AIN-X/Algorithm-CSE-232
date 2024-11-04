#include <bits/stdc++.h>
using namespace std;

#define MAX 5

void BFS(int adj[][MAX], int visited[], int start)
{
    int queue[MAX], rear = -1, front = -1, i, k;

    for (k = 0; k < MAX; k++)
        visited[k] = 0;

    queue[++rear] = start;
    front++;
    visited[start] = 1;

    while (rear >= front)
    {
        start = queue[front++];
        printf("%c ", start + 65);

        for (i = 0; i < MAX; i++)
        {
            if (adj[start][i] == 1 && visited[i] == 0)
            {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int visited[MAX] = {};
    int adj[MAX][MAX], i, j, start = 0;

    printf("\nEnter the adjacency matrix: ");

    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("The BFS result is: ");
    BFS(adj, visited, start);

    printf("nn");
    return 0;
}