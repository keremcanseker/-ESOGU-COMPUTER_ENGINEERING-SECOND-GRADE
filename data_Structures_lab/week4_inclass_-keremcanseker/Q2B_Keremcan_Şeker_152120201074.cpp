#include <iostream>
using namespace std;

int main(){
    
    int n;cout<<"Enter an integer: ";cin>>n;
    int range;cout<<"Enter a range: ";cin>>range;

    for (size_t i = 1, j=1; i <= 10; i++ ,j++)
    {
        cout << n << " * "<<i<<" = "<<n*i<<endl;
        if (j == range) break;
    }
    




    return 0;
}