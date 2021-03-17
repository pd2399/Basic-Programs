# Armstrong numbers are numbers which are equal to the sum of the cubes of their digits

# Define a function to check if given number is an Armstrong number
def isArm(number):
    # Declare an empty variable to stroe the result
    result = 0
    # The input is kept in 'string' for iteration
    #Iterate over the number string and add the result to 'result' var
    for i in number:
        # Convert 'i' to int before calculations
        result = result + (int(i)**3)
    # If result is equal to the given number, it is an Armstrong Number
    if result == int(number):
        print(f"{number} is an Armstrong number")
    else:
        print(f"{number} is not an Armstrong number")


# Create a loop to check program continuously 
while True:
    print("Enter 0 to close.")
    # Take input from user and keep it in string
    num = input("Enter the number: ")
    # Break out of loop
    if num == "0":
        break
    else:
        # Call the above function
        isArm(num)