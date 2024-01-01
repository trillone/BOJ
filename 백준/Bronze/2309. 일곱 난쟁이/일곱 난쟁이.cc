#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> height(9);
    for (int i=0; i<9; i++){
        cin >> height[i];
    }

    int sum = accumulate(height.begin(), height.end(), 0);
    sum -= 100;

    bool found = false;
    for (int i=0; i<8 && !found; i++){
        for (int j=i+1; j<9; j++){
            if ((height[i] + height[j]) == sum) {
                height.erase(height.begin() + j );
                height.erase(height.begin() + i );
                found = true;
                break;
            } 
        }
    }
    sort(height.begin(), height.end());

    for (int h : height){
        cout << h << endl;
    }
    return 0;
}