#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n, i;
string pattern;

bool checkPattern(string& input, string& before_str, string& after_str){
    if (input.length() < before_str.length() || input.length() < after_str.length()){
        return false;
    } else if (input.length() < before_str.length() + after_str.length()){
        return false;
    }
    string before = input.substr(0, before_str.length());
    string after = input.substr(input.length() - after_str.length());

    return before == before_str && after == after_str;
}

int main() {
    cin >> n;
    cin >> pattern;

    size_t pos= pattern.find('*');
    string before_str = pattern.substr(0, pos);
    string after_str = pattern.substr(pos + 1);

    vector<string> input(n), output(n);

    for (i=0; i<n; i++){
        cin >> input[i];
        
        if (checkPattern(input[i], before_str, after_str)){
            output[i] = "DA";
        } else {
            output[i] = "NE";
        }
    }

    for (i=0; i<n; i++){
        cout << output[i] << "\n";
    }

    return 0;
}