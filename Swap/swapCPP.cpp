// We have to swap the values of two variables by using a temperory variable
#include<iostream>

using namespace std;

// Define a function to swap
void swap1(int a, int b){
    cout<<"Original var are a: "<<a<<", b: "<<b<<"\n";
    // Declare an empty variable to store value of 'a'
    int temp = a;
    // Store value of 'b' in 'a'
    a = b;
    // Store value of 'a' stored in 'temp' in 'b'
    b = temp;
    cout<<"Swapped var are a: "<<a<<", b: "<<b<<"\n";
}

// Swapping two variables without using third variable
void swap2(int a, int b){
    cout<<"Original var are a: "<<a<<", b: "<<b<<"\n";
    if (a > b)  //If (7,4)
    {
        b = a+b;    // 7 + 4 = 11
        a = b-a;    // 11 - 7 = 4
        b = b-a;    // 11 - 4 = 7
    }
    else  // If (4,7)
    {
        a = a+b;    // 4 + 7 = 11
        b = a-b;    // 11 - 7 = 4
        a = a-b;    // 11 - 4 = 7
    }
    cout<<"Swapped var are a: "<<a<<", b: "<<b<<"\n";
}


void main(){
    swap1(5,10);    // Calling 1st function
    swap2(4,7);     // Calling 2nd function
}