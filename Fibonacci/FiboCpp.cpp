// Fibonacci series is a series such that each number is sum of the two preceding numbers
#include <iostream>

using namespace std;

// Define a function to return fibonacci series
void fibo(int number){
    // Declare an array to store the series
    int series[number];
    // Loop in the range of number
    for (int i = 0; i < number; i++)
    {
        // For first two indexes, values are put manually
        if (i == 0)
        {
            series[0] = 0;
        }
        else if (i == 1)
        {
            series[1] = 1;
        }
        else
        {
            // For any ohter index other than 0 and 1, the value is found using the folowing
            series[i] = series[i-1] + series[i-2];
        }
        if (i == number-1)
        {
            // This control flow stmt is used only to leave a line after the last element
            cout<<series[i] <<"\n";
        }
        else
        {
            cout<<series[i] <<" ";
        }
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
            fibo(number);
        }
    }
}