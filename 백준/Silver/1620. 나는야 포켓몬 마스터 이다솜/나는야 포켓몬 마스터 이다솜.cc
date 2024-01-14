#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int n, m, i;
string input;
map<string, int> map1;
map<int, string> map2;

int main() {
    cin >> n >> m;
    string output[m];

    for (i=0; i<n; i++){
        cin >> input; 
        map1[input] = i+1;
        map2[i+1] = input;
    }

    for (int i=0; i<m; i++){
        cin >> input;
        if (atoi(input.c_str()) == 0){
            output[i] = to_string(map1[input]);
        } else {
            output[i] = map2[atoi(input.c_str())];
        }
    }

    for (i=0; i<m; i++){
        cout << output[i] << '\n';
    }

    return 0;
}