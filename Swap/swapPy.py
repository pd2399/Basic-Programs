# We have to swap the values of two variables by using a temperory variable

# Define a function to swap
def swap1(a,b):
    print(f"Original var (a:{a}, b:{b})")
    # Define a temperory var to store value of 'a'
    temp = a
    # Store value of 'b' in 'a'
    a = b
    # Store value of 'a' stored in 'temp' in 'b'
    b = temp
    print(f"Swapped var (a:{a}, b:{b})\n")


# Swapping two variables without using third variable
def swap2(a,b):
    print(f"Original var (a:{a}, b:{b})")
    if a > b:   # If (7,4)
        b = a + b # 7 + 4 = 11
        a = b - a # 11 - 7 = 4
        b = b - a # 11 - 4 = 7
    else:   # If (4,7)
        a = a + b # 4 + 7 = 11
        b = a - b # 11 - 7 = 4
        a = a - b # 11 - 4 = 7
    print(f"Swapped var (a:{a}, b:{b})\n")


#Call the first function
swap1(5,10)

# Call the second function
swap2(4,7)