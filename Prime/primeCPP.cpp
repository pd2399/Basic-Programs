// If the number is not divisible by any number less than or equal to its squareroot, its prime
#include <iostream>
#include <cmath>    // To check the square root, import math module

using namespace std;

// Define a function to check prime number
void isPrime(int number){
    // Declare a bool variable to store result
    bool result = true;
    // Declare a variable to store value of square root
    int sqrtnum = sqrt(number);
    // Implement for-loop to check the number
    for (int i = 2; i <= sqrtnum; i++)
    {
        // If not prime, result will be False
        if (number%i == 0)
        {
            cout<<number<<" is not a prime number\n";
            result = false;
            // Break out of loop immediately
            break;
        }
    }
    if (result == true)
    {
        cout<<number<<" is a prime number\n";
    }
}


void main(){      // Main Function
    // Create a loop to check program continuously 
    while (true)
    {
        // Take input from user
        cout<< "Enter 0 to quit.\n";
        cout<<"Enter the number: ";
        int number;
        cin>>number;
        if (number == 0)
        {
            // Break out of loop
            break;
        }
        else
        {
            // Call the above function
            isPrime(number);
        }
    }
}