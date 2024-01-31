#include <iostream>
#include <stack>
#include <string>

using namespace std;

int n, i, j;
int output = 0;
string temp;


int main() {
    cin >> n;
    for (i=0; i<n; i++){
        cin >> temp;
        stack<char> input;
        for (char c: temp){
            if (input.size()>0 && input.top() == c){
                input.pop();
            } else {
                input.push(c);
            }
        }
        if (input.size()==0){
            output++;
        }
    }

    cout << output << '\n';
    return 0;
}