#include <iostream>
using namespace std;


int main(){
   
    int n;cin>>n;
    int* arraylist= new int[n];
    //contigous  allocation
    for (size_t i = 0; i < n; i++)
    {
        cout << (arraylist[i])<<endl;
    }delete arraylist;
    

    





}