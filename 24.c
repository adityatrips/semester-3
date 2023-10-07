#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

typedef struct {
    int vertices[MAX_VERTICES][MAX_VERTICES];
    int num_vertices;
} Graph;

typedef struct {
    int items[MAX_VERTICES];
    int top;
} Stack;

typedef struct {
    int items[MAX_VERTICES];
    int front;
    int rear;
} Queue;

void init_graph(Graph *g) {
    g->num_vertices = 0;
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            g->vertices[i][j] = 0;
        }
    }
}

void add_edge(Graph *g, int u, int v) {
    g->vertices[u][v] = 1;
    g->vertices[v][u] = 1;
}

void dfs(Graph *g, int start_vertex) {
    int visited[MAX_VERTICES] = {0};
    Stack s;
    s.top = -1;
    s.items[++s.top] = start_vertex;
    visited[start_vertex] = 1;
    printf("DFS traversal: ");
    printf("%d ", start_vertex);

    while (s.top != -1) {
        int current_vertex = s.items[s.top--];
        for (int i = 0; i < g->num_vertices; i++) {
            if (g->vertices[current_vertex][i] == 1 && visited[i] == 0) {
                s.items[++s.top] = i;
                visited[i] = 1;
                printf("%d ", i);
            }
        }
    }
    printf("\n");
}

void bfs(Graph *g, int start_vertex) {
    int visited[MAX_VERTICES] = {0};
    Queue q;
    q.front = -1;
    q.rear = -1;
    q.items[++q.rear] = start_vertex;
    visited[start_vertex] = 1;
    printf("BFS traversal: ");
    printf("%d ", start_vertex);

    while (q.front != q.rear) {
        int current_vertex = q.items[++q.front];
        for (int i = 0; i < g->num_vertices; i++) {
            if (g->vertices[current_vertex][i] == 1 && visited[i] == 0) {
                q.items[++q.rear] = i;
                visited[i] = 1;
                printf("%d ", i);
            }
        }
    }
    printf("\n");
}

int main() {
    Graph g;
    init_graph(&g);

    add_edge(&g, 0, 1);
    add_edge(&g, 0, 2);
    add_edge(&g, 1, 3);
    add_edge(&g, 1, 4);
    add_edge(&g, 2, 5);
    add_edge(&g, 2, 6);

    g.num_vertices = 7;

    dfs(&g, 0);
    bfs(&g, 0);

    return 0;
}
