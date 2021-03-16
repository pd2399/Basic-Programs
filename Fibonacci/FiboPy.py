# Fibonacci series is a series such that each number is sum of the two preceding numbers

# Define a function to find the series
def Fibonacci(number):
    # Create an empty list to store the series
    series = []
    for i in range(number):     # Loop in the range of the number
        # As there are no numbers in the series for first two instances of i, we add them manually
        if i == 0 :
            series.append(0)
        elif i == 1:
            series.append(1)
        # The series has atleast 2 numbers, hence the sum can be found automatically
        else:
            series.append(series[i-1] + series[i-2])
    # Return the obtained series
    return series


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
        print(Fibonacci(num))