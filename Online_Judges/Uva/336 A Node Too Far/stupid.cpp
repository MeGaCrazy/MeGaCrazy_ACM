#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#define MAXN    500

using namespace std;

map <int, vector <int> > graph;
map<int,bool> discovered;//keeps track if a node has been reached
map<int,int>  parent;//stores the nodes ancestor that discovered it for the first time
map<int,int>  distances;//stores the distance to reach each node from the source

void read_graph(int edges)
{
    graph.clear();
    int vertex1,  vertex2;
    int i;
    for(i = 0; i < edges; i++)
    {
        scanf("%d %d", &vertex1, &vertex2);
        graph[vertex1].push_back(vertex2);
        graph[vertex2].push_back(vertex1);

        discovered[vertex1] = false;discovered[vertex2] = false;
        parent[vertex1] = -1;parent[vertex2] = -1;
        distances[vertex1] = -1;distances[vertex2] = -1;
    }
}

void clearGraph()
{
    for(map<int,int>::iterator iter = distances.begin(); iter != distances.end(); iter++)
        distances[iter->first] = -1;
    for(map<int,int>::iterator iter = parent.begin(); iter != parent.end(); iter++)
        parent[iter->first] = -1;
    for(map<int,bool>::iterator iter = discovered.begin(); iter != discovered.end(); iter++)
        discovered[iter->first] = false;
}

void bfs(int start)
{
    int current;//current node being processed
    int next;//reached node by current
    unsigned int i;
    queue<int> vertices;//vertices to process
    distances[start] = 0;
    discovered[start] = true;
    vertices.push(start);
    while(!vertices.empty())
    {
        current = vertices.front();
        vertices.pop();
        for(i = 0; i < graph[current].size(); i++)//for each node connected to current
        {
            next = graph[current][i];
            if(!discovered[next])//if it hasn't been reached
            {
                discovered[next] = true;//mark it as reached
                parent[next] = current;//store its parent
                distances[next] = distances[current]+1;//save the distance
                vertices.push(next);//push it to the queue for further analysis
            }
        }
    }
}

/*void find_path(int vertex)//recursive procedure to find the path
{
    if(vertex == -1)
        return;
    find_path(parent[vertex]);
    printf("%d ", vertex);
}*/

int main()
{
    int vertices, edges, start, ttl, notReach, casos = 1;
    while(scanf("%d", &edges))
    {
        if(!edges)
           break;
        read_graph(edges);

        while(scanf("%d %d", &start, &ttl))
        {
            if(!start && !ttl)
               break;

            bfs(start);
            notReach = 0;
            for(map<int,int>::iterator it = distances.begin(); it!= distances.end(); it++)
                if(it->second > ttl)
                   notReach++;

            for(map<int,bool>::iterator it = discovered.begin(); it!= discovered.end(); it++)
                if(it->second == false)
                   notReach++;

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",casos++, notReach,start, ttl);
            clearGraph();
        }
        discovered.clear();//keeps track if a node has been reached
        parent.clear();//stores the nodes ancestor that discovered it for the first time
        distances.clear();//stores the distance to reach each node from the source
    }
return 0;
}