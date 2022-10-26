#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {20,15,5,10,1};

    cout<<"size of vector is : ";int n;cin >>n;
    cout << "vector elemnts are given below:\n";
    for (size_t i = 0; i < n; i++)
    {
        cout <<v.at(i)<<" ";
    }cout <<endl;
    
    cout << "\nEnter the value for insertion: ";
    cin>>n;v.insert(v.begin(),n);
    for (auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i<<" ";
    }cout <<endl;

    cout << "\nEnter the value for insertion: ";
    cin>>n;v.insert(v.end(),n);
    for (auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i<<" ";
    }cout <<endl;


    bool swapp = true;
      while(swapp){
        int temp;
        swapp = false;
        for (size_t i = 0; i < v.size()-1; i++) {
            if (v[i]>v[i+1] ){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                swapp = true;
            }
        }

    }
    cout <<"\nBubble sort..."<<endl;
    for (auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i<<" ";
    }cout <<endl;

    
    for(auto i = v.begin(); i != v.end(); i++)
 	{
   		// Search
   		auto const insertion_point = upper_bound(v.begin(), i, *i);

   		//insert
   		rotate(insertion_point, i, i+1);
 	} 


    cout <<"\nInsertion sort..."<<endl;
    for (auto i = v.end(); i < v.begin(); i--)
    {
        cout << *i<<" ";
    }cout <<endl;

    

    return 0;
}