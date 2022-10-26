#include <iostream>
using namespace std;


int main(){
   
    int row,column;cin >> row>> column;
    int arr[row][column];

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            cout <<"&X["<<i<<"]["<<j<<"]= "<<&arr[i][j]<<endl;
        }
        cout << endl;
    }
    
    //total amount of memory used on the screen
    int sum= 0;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            sum += sizeof(arr[i][j]);
        }
        
    }cout <<"total amount of memory used on the screen: " <<sum<<endl;
    




}