#include <iostream>

using namespace std;

int n, i;
int out1=0;
int out2=0;

// 재귀호출
int fib(int n) {
    if (n==1 || n==2){
        out1++;
        return 1;
    } else {
        return (fib(n-1) + fib(n-2));
    }
}

// 동적 프로그래밍
int fibonacci(int n){
    
    int f[n];
    f[0] = 1;
    f[1] = 1;
    for (i=2; i<n; i++){
        f[i] = f[i-1] + f[i-2];
        out2++;
    }
    return f[n-1];
}

int main() {
    cin >> n;
    int ret1 = fib(n);
    int ret2 = fibonacci(n);

    cout << out1 << ' ' << out2 << '\n';
    return 0;
}