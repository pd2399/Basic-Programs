// Armstrong numbers are numbers which are equal to the sum of the cubes of their digits
#include <iostream>
#include <string>

using namespace std;

// Define a function to check if a number is an Armstrong number
void isArm(int number, int length){
    // Declare an empty array to store them
    int digits[length];
    // Declare a variable to store value of number
    int num_copy = number;
    // Declare an empty variable to store result
    int result = 0;
    // Implement a loop to split digits and add results to resule variable
    for (int i = 0; num_copy > 0; i++)
    {
        digits[i] = num_copy%10;
        num_copy = num_copy/10;
        result = result + (digits[i]*digits[i]*digits[i]);
    }
    // If result is equal to the given number, it is an Armstrong Number
    if (result == number)
    {
        cout<<number<<" is an Armstrong number."<<endl;
    }
    else
    {
        cout<<number<<" is not an Armstrong number."<<endl;
    }
}


void main(){      // Main Function
    // Create a loop to check program continuously 
    while (true)
    {
        // Take input from user and take the number of digits of the number
        cout<< "Enter 0 to quit.\n";
        cout<<"Enter the number: ";
        int number;
        cin>>number;
        if (number == 0)
        {
            // Break out of loop
            break;
        }
        cout<<"Enter the number of digits of the number: ";
        int length;
        cin>>length;
        // Call the above function
        isArm(number,length);
    }
}