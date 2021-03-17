# Check if the given string is a palindrome, i.e. if it is spelled same backwards as forward

# Define a function to check palindrome
def isPalindrome(string):
    # Declare two empty strings to store half strings
    fh = ""
    sh = ""
    # If the number of letters are even, exactly half of the string is considered
    if len(string) % 2 == 0:
        # Find the midpoint of string
        midp = len(string) / 2
        # Iterate over the string and add first half to fh and second to sh
        for i in range(len(string)):
            if i < midp:
                fh = "".join((fh, string[i]))
            elif i >= midp:
                sh = "".join((sh, string[i]))
        # Declare a count variable to keep count of words matching
        count = 0
        for i in range(len(fh)):
            # Compare the 1st letter of fh with last letter of sh and so on
            if fh[i] == sh[-(i+1)]:
                count += 1
        # If all the letters match, it is a palindrome
        if count == len(fh):
            print("The given string is a palindrome")
        else: 
            print("The given string is not a palindrome")

    # If number of letters are odd, middle letter is considered as middle index
    else:
        # Find the middle letter
        midi = (len(string)-1) / 2
        # Itterate over the string and add letters upto midi to fh and letters after midi to sh, middle letter is not considered
        for i in range(len(string)):
            if i < midi:
                fh = "".join((fh, string[i]))
            elif i > midi:
                sh = "".join((sh, string[i]))
            else:
                continue
        # Declare a count variable to keep count of words matching
        count = 0
        for i in range(len(fh)):
            # Compare the 1st letter of fh with last letter of sh and so on
            if fh[i] == sh[-(i+1)]:
                count += 1

        # If all the letters match, it is a palindrome
        if count == len(fh):
            print("The given string is a palindrome")
        else: 
            print("The given string is not a palindrome")
        

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
        isPalindrome(string)