//randNum = minNumber + (rand() % (maxNumber - minNumber + 1));

#include "RandomNumberGenerator.h"
#include <time.h>  
#include <iostream>  
using namespace std; 
RandomNumberGenerator::RandomNumberGenerator()  
{  
srand(time(NULL));  
}  
RandomNumberGenerator::~RandomNumberGenerator()  
{  
}  
int RandomNumberGenerator::getRandomInteger(int lowerBound, int upperBound)  
{  
    int randNum = lowerBound + (rand() % (upperBound-lowerBound+1));
    return randNum;
}  
float RandomNumberGenerator::getRandomFloat(float lowerBound, float upperBound, 
Precision precision)  
{  
    int newLower, newUpper;float randFloat;
    switch (precision)
    {
    case  ONE:
        newLower = lowerBound * 10;
        newUpper = upperBound * 10;
        randFloat = newLower + (rand()% (newUpper - newLower + 1));
        randFloat = randFloat / 10;
        return randFloat;
        break;
    case TWO:
        newLower = lowerBound * 100;
        newUpper = upperBound * 100;
        randFloat = newLower + (rand()% (newUpper - newLower + 1));
        randFloat = randFloat / 100;
        return randFloat;
    case THREE:
        newLower = lowerBound * 1000;
        newUpper = upperBound * 1000;
        randFloat = newLower + (rand()% (newUpper - newLower + 1));
        randFloat = randFloat / 1000;
        return randFloat;
    case FOUR:
        newLower = lowerBound * 10000;
        newUpper = upperBound * 10000;
        randFloat = newLower + (rand()% (newUpper - newLower + 1));
        randFloat = randFloat / 10000;
        return randFloat;
    default:
        break;
    }

// Implement the function  
// You are required to use switch case structure for the enum type  
}  
double RandomNumberGenerator::getRandomDouble(double lowerBound, double upperBound, 
Precision precision)  
{  
    int newLower, newUpper;double randDouble;
switch (precision)
    {
    case  ONE:
        newLower = lowerBound * 10;
        newUpper = upperBound * 10;
        randDouble = newLower + (rand()% (newUpper - newLower + 1));
        randDouble = randDouble / 10;
        return randDouble;
        break;
    case TWO:
        newLower = lowerBound * 100;
        newUpper = upperBound * 100;
        randDouble = newLower + (rand()% (newUpper - newLower + 1));
        randDouble= randDouble/ 100;
        return randDouble;
    case THREE:
        newLower = lowerBound * 1000;
        newUpper = upperBound * 1000;
        randDouble = newLower + (rand()% (newUpper - newLower + 1));
        randDouble= randDouble/ 1000;
        return randDouble;
    case FOUR :
        newLower = lowerBound * 10000;
        newUpper = upperBound * 10000;
        randDouble = newLower + (rand()% (newUpper - newLower + 1));
        randDouble= randDouble/ 10000;
        return randDouble;
    default:
        break;
    }
 
}

void TEST_RandomInteger(RandomNumberGenerator& generator, int lowerBound, int 
upperBound)  
{ 
 int randomNumber = generator.getRandomInteger(lowerBound, upperBound);  
if (randomNumber >= lowerBound && randomNumber <= upperBound)  
{  
cout << "SUCCESS : " << randomNumber << endl;  
}  
else  
{ 
cout << "FAILURE : Obtained number is not between the range [" << lowerBound << "," << upperBound << 
"]" << endl; 
} 
} 
 
/// <summary>  
/// Random Float Test  
/// </summary>  
/// <param name="generator">The generator.</param>  
/// <param name="lowerBound">The lower bound.</param>  
/// <param name="upperBound">The upper bound.</param>  
/// <param name="precision">The precision.</param>  
void TEST_RandomFloat(RandomNumberGenerator& generator, float lowerBound, float 
upperBound, RandomNumberGenerator::Precision precision)  
{  
 float randomNumber = generator.getRandomFloat(lowerBound, upperBound, precision);  
if (randomNumber >= lowerBound && randomNumber <= upperBound)  
{  
cout << "SUCCESS : " << randomNumber << endl;  
}  
else  
{ 
cout << "FAILURE : Obtained number is not between the range [" << lowerBound << "," << upperBound << 
"]" << endl;   
}
}
/// <summary>  
/// Random Double Test  
/// </summary>  
/// <param name="generator">The generator.</param>  
/// <param name="lowerBound">The lower bound.</param>  
/// <param name="upperBound">The upper bound.</param>  
/// <param name="precision">The precision.</param>  
void TEST_RandomDouble(RandomNumberGenerator& generator, double lowerBound, double 
upperBound, RandomNumberGenerator::Precision precision)  
{  
double randomNumber = generator.getRandomDouble(lowerBound, upperBound, precision);  
if (randomNumber >= lowerBound && randomNumber <= upperBound)  
{  
cout << "SUCCESS : " << randomNumber << endl;  
}  
else  
{ 
cout << "FAILURE : Obtained number is not between the range [" << lowerBound << "," << upperBound << 
"]" << endl;   
}
}  
/// <summary>  
/// Main Function  
/// </summary>  
/// <returns></returns>  
int main()  
{ 
 RandomNumberGenerator generator;  
cout << "+---------------------+" << endl  
<< "| Random Integer Test |" << endl  
<< "+---------------------+" << endl;  
TEST_RandomInteger(generator,5,20);  
TEST_RandomInteger(generator, 2, 60);  
cout <<"+-------------------+" << endl  
<< "| Randon Float Test |" << endl  
<< "+-------------------+" << endl;  
TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::ONE);  
TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::TWO);  
TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::THREE);  
TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::FOUR); 
cout << "+--------------------+" << endl  
<< "| Randon Double Test |" << endl  
<< "+--------------------+" << endl;  
TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::ONE);  
TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::TWO);  
TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::THREE);  
TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::FOUR); 
}