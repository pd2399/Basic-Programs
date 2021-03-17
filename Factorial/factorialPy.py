# Factorial of a number is the multiplication of all the numbers less than or equal to it.
# For this, recursion is used

# Define a function to find the factorial
def factorial(number):
    # If the number is 1, our answer is 1
    if number == 1:
        return 1
    # If it is not 1, we have to check for number-1 and multiply number to the answer
    else:
        # This step continues recursively until number == 1
        return number * factorial(number - 1)


# Create a loop to check the program continuously
while True:
    print("Enter 0 to quit.")
    # Take input from user
    num = int(input("Enter the number: "))
    if num == 0:
        # Break out of loop
        break
    else:
        # Call the above function
        # For this function, we have to print the value
        print(f"The answer is : {factorial(num)}")