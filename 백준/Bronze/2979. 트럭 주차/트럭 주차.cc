#include <iostream>
#include <vector>

using namespace std;

int main() {
    int time[100] = {0,};
    int one_car, two_car, three_car;
    int start, end;
    int sum = 0;

    cin >> one_car >> two_car >> three_car;

    for (int i=0; i<3; i++){
        cin >> start >> end;
        for (int j=start-1; j<end-1; j++){
            time[j]++;
        }
    }
    for (int i=0; i<100; i++){
        if (time[i] == 1){
            sum += one_car;
        } else if (time[i] == 2){
            sum += two_car * 2;
        } else if (time[i] == 3){
            sum += three_car * 3;
        }
    }
    cout << sum << endl;
    return 0;
}