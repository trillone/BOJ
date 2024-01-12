#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k, i, j;
int temp = 0;
vector<int> sum;

int main() {
    cin >> n >> k;
    int input[n];

    for (i=0; i<n; i++){
        cin >> input[i];
    }

    for (i=0; i<k; i++){
        temp += input[i];
    }
    sum.push_back(temp);

    for (i=k,j=0;i<n;i++, j++){
        temp -= input[j];
        temp += input[i];
        sum.push_back(temp);
    }

    auto max = max_element(sum.begin(), sum.end());
    cout << *max << endl;

    return 0;
}