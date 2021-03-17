# When given a string, return the reversed string

# Define a function to reverse
def reverse(string):
    # Declare an empty string
    revStr = ""
    #Iterate over the string in a reversed manner
    for i in range(len(string) - 1, -1, -1):    # Here reverse() method could be used instead of giving step as -1
        # Add the elements to the empty string
        revStr = "".join((revStr, string[i]))
    # Print the final string
    print(revStr)


# Create a loop to check program continuously 
while True:
    print("Enter 0 to quit")
    # Take input from user
    string = input("Enter the string: ")
    # Break out of loop
    if string == "0":
        break
    else:
        # Call the above function
        reverse(string)