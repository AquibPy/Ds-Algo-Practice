arr = []
size = int(input("Enter the Size of an Array: "))
print("Enter Negative and Positive Number in an Array: ")
for i in range(size):
    num = int(input())
    arr.append(num)

print("The Array is ", arr)


neg_arr = []
pos_arr = []

for i in arr:
    if i<0:
        neg_arr.append(i)
    else:
        pos_arr.append(i)
print("Sorted Negative and Positive Array is ", neg_arr+pos_arr)