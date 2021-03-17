#include<iostream>

using namespace std;

int evenOdd(int number){
    if (number % 2 == 0)
    {
        cout<<"The number is an even number\n";
    }
    else
    {
        cout<<"The number is an odd number\n";
    }
    return 0;
}

int evenOdd(int number);


int main(){
    while (true)
    {
        cout<< "Enter 0 to quit.\n";
        cout<<"Enter the number: ";
        int number;
        cin>>number;
        if (number == 0)
        {
            break;
        }
        else
        {
            evenOdd(number);
        }
    }
    return 0;
}