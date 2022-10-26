#include <iostream>
using namespace std;

int factorial(int n){
    if (n==1){
        return 1;
    }
    return factorial(n-1) * n;

}

int main(){
    int m;
    int result;
    cout << "enter a number"<<endl;
    cin >> m;
    result = factorial(m);
    cout << result<<endl;

    return 0;
}