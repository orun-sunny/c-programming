
#include <bits/stdc++.h>
using namespace std;

const int N = 5000;
const long long INF = 1e18;

long long dist[N];
long long parent[N];

vector<pair<int, int>> adj_list[N];

void belman_ford(int n){
  bool nega_cycle = false;
  int last_updated_node = -1;

  for (int i = 1; i<=n; i++) {
    for (int node = 1; node <= n; node++) {
      for(pair<int, int>adj_node: adj_list[node] ){
        int u = node;
        int v = adj_node.first;
        int w = adj_node.second;

        if(dist[u] + w < dist[v]) {
          dist[v] = dist[u] + w;
          parent[v] = u;
          if(i == n) {
            nega_cycle = true;
            last_updated_node = v;
          }
        }
      }
    }
  }

  if(nega_cycle) {
    cout << "YES\n";
    int selec_node = last_updated_node;
    for (int i = 1; i < n ; i++) {
      select_node = parent[select_node];
    }
    int first = selected_node;
    vector<int> cycle;
    cycle.push_back(selected_node);

    while(1) {
      select_node = parent[select_node];
      cycle.push_back(select_node);
      if(first == select_node) break;
    }
    reverse(cycle.begin(), cycle.end());
    for(auto it: cycle)
      cout << it << " ";
  } else {
    cout << "NO\n";
  }
}

//main part working

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n, m;
  cin >> n >> m;

  for (int i = 0; i <= n; i++) {
    dist[i] = INF;
  }

  for (int i = 1; i <= m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    adj_list[u].push_back({v, w});
  }

  belman_ford(n);

  return 0;
}

