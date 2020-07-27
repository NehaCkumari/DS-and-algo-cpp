//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <list>
#include<bits/stdc++.h> 
using namespace std;
 
int main()
{
    int vertices, edges;
    string v1, v2;
      
    cout<<"Enter the Number of Vertices -\n";
    cin >> vertices;
      
    cout<<"Enter the Number of Edges -\n";
    cin >> edges;
      
    unordered_map< string, list<string> >  adjacencyList(vertices + 1);
      
    printf("Enter the Edges V1 -> V2, of weight W\n");
    for (int i = 1; i <= edges; ++i) {
        cin >> v1 >> v2;
          
        // Adding Edge to the Directed Graph
        adjacencyList[v1].push_back(v2);
        adjacencyList[v2].push_back(v1);
    }
     
    // Printing Adjacency List
    cout << endl << "The Adjacency List-" << endl;
    for (auto& value : adjacencyList) {
        string vertex = value.first;
        list<string> adjacentVertices = value.second;
        list<string>::iterator itr = adjacentVertices.begin();
         
        cout << "adjacencyList[" << vertex << "]";
          
        while (itr != adjacentVertices.end()) {
            cout << " -> " << *itr;
            ++itr;
        }
         
        cout << endl;
    }
     
    return 0;
}