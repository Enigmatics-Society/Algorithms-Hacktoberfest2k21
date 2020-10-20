# Insertion sort
# Author: Akshant chaudhary

num = int(input("Enter number of elements in the list:"))
numbers = list(map(int, input("Enter elements of the list(in a single line):").split()))

length = len(numbers)
for i in range(1, length):
    key = numbers[i]
    j = i-1

    while (numbers[j] > key) and (j >= 0):
        numbers[j+1] = numbers[j]
        j -= 1

    numbers[j+1] = key

print("Numbers in sorted order are:")
print(numbers)


