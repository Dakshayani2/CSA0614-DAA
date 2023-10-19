#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define V 4 
int min(int a, int b) {
    return (a < b) ? a : b;
}


int tsp(int graph[][V], int mask, int pos, int dp[][1 << V]) {
    
    if (mask == (1 << V) - 1) {
        return graph[pos][0];
    }

    if (dp[pos][mask] != -1) {
        return dp[pos][mask];
    }

    int ans = INT_MAX;

    for (int city = 0; city < V; city++) {
        if ((mask & (1 << city)) == 0) {
            int newAns = graph[pos][city] + tsp(graph, mask | (1 << city), city, dp);
            ans = min(ans, newAns);
        }
    }

    dp[pos][mask] = ans;
    return ans;
}

int main() {
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int dp[V][1 << V];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < (1 << V); j++) {
            dp[i][j] = -1;
        }
    }

    int start = 0;
    int mask = 1 << start;

    int minCost = tsp(graph, mask, start, dp);

    printf("Minimum cost for TSP: %d\n", minCost);

    return 0;
}
