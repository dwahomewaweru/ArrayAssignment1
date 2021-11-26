// ArrayAssignment1.cpp 
// C++ program to compute sum, product and mean of Values in Array of size 10.


#include <iostream>
using namespace std;

int main()
{
   
    int myNums[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }; //Declare interger array of size ten
    int sum = 0;
    int product = 1;
    int mean;


    for (int x = 0; x < 10; x++) 
    {
        sum = sum + myNums[x]; //To compute sum of values in array
        product = product * myNums[x]; //To compute product of values in array
        mean = sum / 10; //To compute mean of values in array
    }

    cout << "\n";
    cout << " The sum of the values in array is : ";
    cout << sum;
    cout << "\n The product of the values in array is : ";
    cout << product;
    cout << "\n The mean of the values in array is : ";
    cout << mean;


    return 0;
}