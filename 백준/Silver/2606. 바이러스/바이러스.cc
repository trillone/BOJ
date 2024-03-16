#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int output = 0;

void dfs(int x, bool *infected, vector <vector<int>> connection){
    infected[x] = true;
    output++;

    for (int k=0; k<connection[x].size(); k++){
        int y = connection[x][k];
        if(!infected[y]){
            dfs(y, infected, connection);
        }
    }
}

int main() {
    int n,c;
    
    cin >> n;
    cin >> c;

    bool *infected = new bool[n+1];

    for (int i=0; i<=n; i++){
        infected[i] = false;
    }

    vector <vector<int>> connection(n+1);

    for (int j=0; j<c; j++){
        int a,b;
        cin >> a >> b;
        connection[a].push_back(b);
        connection[b].push_back(a);
    }

    dfs(1, infected, connection);
    output--;
    cout << output << endl;

    return 0;
}