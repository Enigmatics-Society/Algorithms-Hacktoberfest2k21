#include<bits/stdc++.h>
using namespace std;
 
vector<int> G[6];

template<typename T>

void DFS_Helper( T i, map<T,bool> &v ){
    cout << i << " ";
    v[i] = true; // conveying that we have visited the node

    for( auto it : G[i])
    {
        if(!v[it])   // if not visited
            DFS_Helper(it,v);
    }

}

template<typename T>

void DFS(T i){
    map< T , bool > v;
    for( auto itr : G)
    {  vector<int> X = itr;
        for(auto it : X)
          v[it] = false;           // conveying that all the nodes aren't visited;
    }
    
    DFS_Helper(i , v);

}



int main()
{
    int V,E;
    cin >> V >> E;
    for(int i=0 ; i < E ;i++)
    {
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for(int i = 1 ; i < E ; i++ )
    {
        cout << i << " -> ";

        for( auto it  : G[i])
            cout << it << " " ;

        cout << endl;

    }

    cout << "DFS" << endl; 
    DFS(1);


    return 0;
}