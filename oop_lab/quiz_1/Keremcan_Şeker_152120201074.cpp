//Keremcan Şeker 152120201074



#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main(){
    srand(time(NULL));
    // variable declaration
    int dataSize, minNumber, maxNumber;
    float mean, varience, std;

    // get the input from user
    cout << "Enter Data Size <0 for terminate program>: ";
    cin >> dataSize;
    if (dataSize == 0){
        return 0;
    } 
    cout << "Enter minimum number: ";
    cin >> minNumber;
    cout << "Enter maximum number: ";
    cin >> maxNumber;

    cout << "------DATA ARRAY------"<<endl;
    //create a dataset using given inputs
    int arrData[dataSize];
    for (size_t i = 0; i < dataSize; i++)
    {
        int randNum = minNumber + (rand() % (maxNumber - minNumber + 1));
        arrData[i] = randNum;
        cout << "        "<< randNum <<"   "<<endl;
    }

    cout << "------MEAN------"<<endl;
    //calculate the mean
    int sum;
    for (size_t i = 0; i < dataSize; i++)
    {
       sum += arrData[i];
    }
    mean = sum/dataSize;
    sum = 0;
    cout << "        "<< mean << "   "<<endl;

    cout << "------VARIENCE------"<<endl;;
    //calculate the varience
    for (size_t i = 0; i < dataSize; i++)
    {
        sum += (arrData[i] - mean)*(arrData[i] - mean);
    }
    varience = sum/(dataSize-1);
    cout<< "        "<<varience<< "   "<<endl;

    cout << "----STANDART DEVIATION----"<<endl;
    //calculate the std
    std = sqrt(varience);
    cout<< "        "<<std<< "   "<<endl;

    
    cout << "\n\nEXECUTION FINISHED SUCCESFULLY"<<endl;
   



    return 0;
}