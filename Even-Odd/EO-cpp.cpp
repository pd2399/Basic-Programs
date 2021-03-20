// Number is even if it is divisible by 2, else it is odd
#include<iostream>

using namespace std;

// Create a function to determine whether the given number is even or odd
void evenOdd(int number){
    // Check if number is divisible by 2
    if (number % 2 == 0)
    {
        cout<<number<<" is an even number\n";
    }
    else
    {
        // Else the number is odd
        cout<<number<<" is an odd number\n";
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
            evenOdd(number);
        }
    }
}