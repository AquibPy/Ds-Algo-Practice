arr = []
rotate_arr = []
size = int(input("Enter Size of an Array: "))
print("Enter Element in an Array: ")
for i in range(size):
    n = int(input())
    arr.append(n)

print("Array is ", arr)
rotate_arr.append(arr[size-1])
for i in range(0,size-1):
    rotate_arr.append(arr[i])
print(rotate_arr)