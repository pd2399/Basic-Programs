# Number is even if it is divisible by 2, else it is odd

# Create a function to determine whether the given number is even or odd
def evenOdd(number):
    # Check if number is divisible by 2
    if number % 2 == 0:
        print(f"{number} is an even number\n")
    else:
        # Else the number is odd
        print(f"{number} is an odd number\n")   


# Create a loop to check program continuously 
while True:
    print("Enter 0 to close.")
    # Take input from user and convert to int
    num = int(input("Enter the number: "))
    # Break out of loop
    if num == 0:
        break
    else:
        # Call the above function
        evenOdd(num)