#include <iostream>
#include <vector>

using namespace std;

int main() {
    string input;
    int nums[26] = {0,};
    cin >> input;
    vector<char> word;
    for (char c: input){
        word.push_back(c);
    }

    for (int i=0; i<word.size(); i++){
        nums[word[i] - 97] ++;
    }

    for (int n : nums){
        cout << n << " ";
    }
    return 0;
}