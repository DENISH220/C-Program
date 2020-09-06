#include<iostream>

using namespace std;

int main()
{
    int cost[10][10], i, j, k, vertice, stk[10], top, v, visit[10], visited[10], edge;

    cout << "Enter numbers of vertice : ";
    cin >> vertice;
    cout << "\nEnter numbers of edge : ";
    cin >> edge;
    cout << "\nEDGES \n";

    for (k = 1; k <= edge; k++)
    {
        cin >> i >> j;
        cost[i][j] = 1;
    }

    cout << "\nEnter initial vertex : ";
    cin >> v;
    cout << "\nORDER OF VISITED VERTICES IS : ";
    cout << v << " ";
    visited[v] = 1;
    k = 1;
    while (k < vertice)
    {
        for (j = vertice; j >= 1; j--)
        {
            if (cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1)
            {
                visit[j] = 1;
                stk[top] = j;
                top++;
            }
        }

        v = stk[--top];
        cout << v << " ";
        k++;
        visit[v] = 0;
        visited[v] = 1;
    }

    return 0;
}