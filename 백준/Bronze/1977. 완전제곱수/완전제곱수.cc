#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int m, n;
int total;
int min_num, temp;
bool found = false;

int main() {
    cin >> m;
    cin >> n;

    for (int i=0; i<101; i++){
        temp = i*i;
        if ((m <= temp) && (temp <= n)){
            if (!found){
                found = true;
                min_num = temp;
            }
            total += i*i;
        }
    }

    if (!found){
        cout << "-1";
    }  
    else {
        cout << total << '\n';
        cout << min_num << '\n';
    }
    return 0;
}