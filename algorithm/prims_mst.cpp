#include <bits/stdc++.h>
using namespace std;

class Graph
{
    vector<pair<int, int>> *l;
    int V;

public:
    Graph(int n)
    {
        V = n;
        l = new vector<pair<int, int>>[n];
    }
    void addEdge(int x, int y, int w)
    {
        l[x].push_back({y, w});
        l[y].push_back({x, w});
    }
    int prim_mst()
    {
        // min heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

        // visited array that denotes if a node has been included in MST or not
        bool *visited = new bool[V]{0};
        int ans = 0;

        // start from source node
        Q.push({0, 0});

        while (!Q.empty())
        {
            // pick the edge with min weight

            auto best = Q.top();
            Q.pop();

            int to = best.second;
            int weight = best.first;

            if (visited[to])
            {
                continue;
            }
            ans += weight;
            visited[to] = 1;
            // add new edges
            for (auto x : l[to])
            {
                if (visited[x.first] == 0)
                {
                    Q.push({x.second, x.first});
                }
            }
        }
        return ans;
    }
};

void prims()
{
    int n, m;
    cout << "Enter Vertices and Edges: ";
    cin >> n >> m;
    Graph g(n);
    cout << "Enter Source Destination Weight: " << endl;
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        g.addEdge(x - 1, y - 1, w);
    }
    cout << g.prim_mst() << "\n";
}

const int MAX = 1e6 - 1;
int parent[MAX];

int find(int a) // function to find the parent of the subset this a belongs to
{
    while (parent[a] != a)
    {
        parent[a] = parent[parent[a]];
        a = parent[a];
    }

    return a;
}

void union_(int a, int b) // function to merge two subsets
{
    int d = find(a);
    int e = find(b);
    parent[d] = parent[e];
}

void kruskal()
{
    int vertices, edges;
    cout << "Enter How Many Vertices: ";
    cin >> vertices;
    cout << "Enter How Many Edges: ";
    cin >> edges;

    vector<pair<int, pair<int, int>>> adj; // vector to store the edges in the form - > {weight, {source, destination}}

    cout << "Enter Weight Source Destination:" << endl;
    for (int i = 0; i < edges; i++)
    {
        int weight, src, destination;
        cin >> weight >> src >> destination;

        adj.push_back({weight, {src, destination}}); // pushing back the edges one by one
    }

    sort(adj.begin(), adj.end()); // sorting the edges

    for (int i = 0; i < MAX; i++)
    {
        parent[i] = i; // initialising the parent of each node as itself
    }

    vector<pair<int, int>> tree_edges; // vector for storing the edges of the minimum spanning tree

    int totalweight = 0; // initialising the total weight to 0

    for (auto x : adj)
    {
        int a = x.second.first;  // Source
        int b = x.second.second; // Destination
        int cost = x.first;      // Weight

        if (find(a) != find(b)) // if the two vertices are in different subsets, merge them into one
        {
            totalweight += cost;
            union_(a, b);
            tree_edges.push_back({a, b});
        }
    }

    cout << "Edges are : " << endl;

    for (auto x : tree_edges) // printing the edges of the minimum spanning tree
    {

        cout << x.first << " " << x.second << endl;
    }

    cout << "Total weight of MST = ";

    cout << totalweight << endl; // printing the total weight of the minimum spanning tree
}
int main()
{
    int t;
    cout << "\tWelcome" << endl
         << "Enter according to your choice from below:" << endl
         << "1. To find MST using Prims Algorithm" << endl
         << "2. To find MST using Kruskal Algorithm" << endl;
    cin >> t;
    if (t == 1)
        prims();
    if (t == 2)
        kruskal();

    return 0;
}

// Prims
//  8 9
//  1 2 10
//  2 3 12
//  2 8 14
//  2 6 6
//  3 4 7
//  4 5 9
//  5 6 11
//  6 7 12
//  7 8 13
