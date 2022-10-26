#include <iostream>
#include <vector>
using namespace std;

    

int main(){
    int n;cout << "Enter size of vector: ";cin>>n;
    vector<int> intvec;
    

    cout << "Vector elements are given below"<<endl;
    for (size_t i = 0; i < n; i++)
    {
        intvec.push_back(i);
        cout <<intvec.at(i)<<"  ";
    }cout <<endl;

    cout <<"Size of vector is: ";cin>>n;
    cout<<"Updated Vector elements are given below: "<<endl;
    
    intvec.insert(intvec.begin(),20);
    
    for (size_t i = 0; i < n; i++)
    {
        cout <<intvec.at(i)<<"  ";
    }cout <<endl;
    
    cout << "Output of reverse array: ";
    for (auto i = intvec.rbegin(); i != intvec.rend(); ++i){
       cout << *i << " ";  
    }
        
    

    

    
 
   
    return 0;
}