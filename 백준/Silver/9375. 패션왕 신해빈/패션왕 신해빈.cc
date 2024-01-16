#include <iostream>
#include <vector>
#include <map>

using namespace std;

int i, j, k;
int t, n;
string name;
string type;


int main() {
    cin >> t;
    int output[t];

    for (i=0; i<t; i++){
        cin >> n;
        map<string,int> input;
        
        for (j=0; j<n; j++){
            cin >> name >> type;
            input[type]++;
        }
        k=1;
        for (const pair<const string, int>& l: input){
            k *= (l.second + 1);
        }
        k-=1;
        output[i] = k;
    }

    for (i=0;i<t;i++){
        cout << output[i] << '\n';
    }

    return 0;
}