#include <iostream>
#include <string>

using namespace std;

string input;
string output;
int length;

int main() {
    getline(cin, input);
    length = input.size();
    output = string(length,' ');

    for (int i=0; i<length; i++){
        if (input[i] == ' '){
            output[i] = ' ';
        } else if ( (65 <= input[i]) && (input[i] <=77)){
            output[i] = input[i] + 13;
        } else if ( (97 <= input[i]) && (input[i] <=109)){
            output[i] = input[i] + 13;
        } else if ( (78 <= input[i]) && (input[i] <=90)){
            output[i] = input[i] - 13;
        } else if ( (110 <= input[i]) && (input[i] <=122)){
            output[i] = input[i] - 13;
        } else {
            output[i] = input[i];
        }
    }
    cout << output << endl;
    return 0;
}