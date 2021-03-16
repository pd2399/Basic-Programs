# If the number is not divisible by any number less than or equal to its squareroot, its prime

# To check the square root, import math module
import math     


# Create a function to check the given number
def isPrime(number):
    # Declare a bool variable to store the result
    result = True
    # Implement for-loop to check the number and convert the sqrt from float to int
    for num in range(2, (int(math.sqrt(number)+1))):
        if number % num == 0:
            # If not prime, result will be False
            result = False
            print(f"{number} is not prime\n")
            # Break out of loop immediately
            break   
    if result == True:
        print(f"{number} is prime\n")


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
        isPrime(num) 