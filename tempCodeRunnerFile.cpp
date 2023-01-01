#include <bits/stdc++.h>
using namespace std;
class G {
public:
	G(int vertices);
	void edge(int src, int dst);
	int paths(int src, int dst, int vertices);

private:
	int vertices;
	list<int>* neighbours;
	void counter(int src, int dst, int& path_count,
					vector<bool>& visited);
};

G::G(int vertice)
{
	vertices = vertice;
	neighbours = new list<int>[vertice];
}

void G::edge(int src, int dst)
{
	neighbours[src].push_back(dst);
}

int G::paths(int src, int dst, int vertices)
{
	int count = 0;
	vector<bool> visited(vertices, false);
	counter(src, dst, count, visited);
	return count;
}
void G::counter(int src, int dst, int& count,
						vector<bool>& visited)
{
	visited[src] = true;
	if (src == dst) {
		count++;
	}
	else {
		for (auto neighbour : neighbours[src]) {
			if (!visited[neighbour])
				counter(neighbour, dst, count,
							visited);
		}
	}
	visited[src] = false;
}
int main()
{
    int t;
    cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        G g(n);
        while (m--){
            int a,b;
            cin>>a>>b;
            g.edge(a,b);
        }
        int x,y,z,w;
        cin>>x>>y>>z;
        w=g.paths(x,y,n);
        if(w>=z){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	

	return 0;
}
