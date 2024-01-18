#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

string input;
int i, j, k;
map<char,int> count;
bool oneOdd = false;
char oddChar;
bool possible = true;
string output = "";

int main() {
    cin >> input;
    for (i=0; i<input.length(); ++i){
        count[input[i]]++;
    }
    for (auto l: count){
        if (l.second % 2 == 1){
            if (!oneOdd){
                oneOdd = true;
                oddChar = l.first;
                count[oddChar]--;
            } else {
                possible = false;
            }
            oneOdd = true;
        } 
    }

    if (possible){
        for (auto &l: count){
            j = l.second;
            for (k=j; k>(j/2);k--){
                output += l.first;
                l.second--;          
            }
        }
        string temp = output;
        if (oneOdd){
            output += oddChar;
        }
        string reversed(temp.rbegin(), temp.rend());
        output += reversed;
        
        cout << output << '\n';
    } else {
        cout << "I'm Sorry Hansoo\n";
    }
    return 0;
}