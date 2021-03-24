// When given a string, return the reversed string
#include <iostream>
// Include 'string' header file
#include <string>

using namespace std;

// Define a function to reverse the given string
void reverse(string str){
    // Print the string in reverse
    for (int i = str.length()-1; i >= 0; i--)
    // str.length - 1 as last element prints a whitespace 
    {
        if (i == 0)
        {
            // This control flow stmt is used only to leave a line after the last element
            cout<<str[i]<<endl;
        }
        else
        {
            cout<<str[i];
        }
    }
}


int main(){  // Main Function
    // Create a loop to check program continuously
    while (true)
    {
        // Take input from user
        cout<< "Enter 'quit' to quit.\n";
        cout<<"Enter the string: ";
        string str;
        cin>>str;
        if (str == "quit")
        {
            // Break out of loop
            break;
        }
        else
        {
            // Call the above function
            reverse(str);
        }
    }  
    return 0;
}