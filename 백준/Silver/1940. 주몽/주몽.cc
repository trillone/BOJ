#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int n, m, i, j, temp;
int output = 0;
int in = -1;
vector<int> input;
bool found = false;

int main() {
    cin >> n;
    cin >> m;
    for (i=0; i<n; i++){
        cin >> temp;
        input.push_back(temp);
    }

    for (i=0; i<input.size(); i++){
        found = false;
        in = -1;

        for (j=i+1; j<input.size(); j++){
            if ((i != j) && (input[i] + input[j] == m)){
                found = true;
                in = j;
                break;
            }
        }

        if (found){
            output++;
            input.erase(input.begin() + in);
            input.erase(input.begin() + i);
            i--;
        }
    }

    cout << output << '\n';
    return 0;
}