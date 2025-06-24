def calculate_average(numbers):
    total = 0
    for num in numbers:
        total += num
    average = total / len(numbers) # Potential ZeroDivisionError here
    return average

data1 = [10, 20, 30]
print(f"Average of data1: {calculate_average(data1)}")

data2 = [] # Empty list will cause a bug
print(f"Average of data2: {calculate_average(data2)}")
