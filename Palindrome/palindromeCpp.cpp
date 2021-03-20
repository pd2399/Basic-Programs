// Check if the given string is a palindrome, i.e. if it is spelled same backwards as forward
#include <iostream>
// Include 'string' header file for string manipulation
#include <string>

using namespace std;

// Define a function to check if given string is a palindrome
void isPalindrome(string str){
    // Declare two empty strings to store half strings
    string fh, sh;
    // If the number of letters are even, exactly half of the string is considered
    if (str.length()%2 == 0)
    {
        // Find the midpoint of string
        int midp = str.length()/2;
        // Iterate over the string and add first half to fh and second to sh
        for (int i = 0; i < str.length(); i++)
        {
            if (i < midp)
            {
                // Syntax: str.append(no. of times char repeats, char)
                fh.append(1,str[i]);  
            }
            else if (i >= midp)
            {
                sh.append(1,str[i]);
            }
        }
        // Declare a count variable to keep count of words matching
        int count = 0;
        for (int k = 0; k<fh.length() ; k++)
        {
            // Compare the 1st letter of fh with last letter of sh and so on
            // Last element of sh is sh.length-1, 2nd last is sh.length-2 and so on
            if (fh[k] == sh[sh.length()-(k+1)])
            {
                count+=1;
            }
        }
        // If all the letters match, it is a palindrome
        if (count == fh.length())
        {
            cout<<"The given string is a Palindrome\n";
        }
        else
        {
            cout<<"The given string is not a Palindrome\n";
        }
    }

    // If number of letters are odd, middle letter is considered as middle index
    else
    {
        // Find the middle letter
        int midi = (str.length()-1)/2;
        // Iterate over the string and add letters upto midi to fh and letters after midi to sh, middle letter is not considered
        for (int i = 0; i < str.length(); i++)
        {
            if (i < midi)
            {
                // Syntax: str.append(no. of times char repeats, char)
                fh.append(1,temp);
            }
            else if (i > midi)
            {
                sh.append(1,temp);
            }
            else
            {
                continue;
            }
        }
        // Declare a count variable to keep count of words matching
        int count = 0;
        for (int k = 0; k<fh.length() ; k++)
        {
            // Compare the 1st letter of fh with last letter of sh and so on
            // Last element of sh is sh.length-1, 2nd last is sh.length-2 and so on
            if (fh[k] == sh[sh.length()-(k+1)])
            {
                count+=1;
            }
        }
        // If all the letters match, it is a palindrome
        if (count == fh.length())
        {
            cout<<"The given string is a Palindrome\n";
        }
        else
        {
            cout<<"The given string is not a Palindrome\n";
        }
    }
}


void main(){  // Main Function
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
            isPalindrome(str);
        }
    }  
}