#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int tc;
int n;
int num;
int discount_price;
int original_price;

int main() {
    cin >> tc;
    vector<vector<int>> output(tc);
    vector<vector<int>> input(tc);
    vector<int> length;
    for (int i=0; i<tc; i++){
        cin >> n;
        length.push_back(n);
        for (int j=0; j<n*2; j++){
            cin >> num;
            input[i].push_back(num);
        }
    }

    for (int i=0; i<tc; i++){
        while (output[i].size() < length[i]) {
            discount_price = input[i][0];
            original_price = discount_price / 3 * 4;
            auto it = find(input[i].begin(), input[i].end(), original_price);
            if (it != input[i].end()){
                input[i].erase(it);
            }      
            output[i].push_back(discount_price);
            input[i].erase(input[i].begin());
        }
    }

    for (int i=0; i<tc; i++){
        cout << "#" << i+1 << " ";
        for (int j=0; j<length[i]; j++){
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}