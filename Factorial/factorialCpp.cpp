// Factorial of a number is the multiplication of all the numbers less than or equal to it.
// For this, recursion is used

#include <iostream>

using namespace std;

// Define a function to find the factorial
int fact(int number){
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return (number*fact(number-1));
    }
    
}

int main(){      // Main Function
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
            cout<<"The answer is: "<<fact(number)<<endl;
        }
    }
    return 0;
}