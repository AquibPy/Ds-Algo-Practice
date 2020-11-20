n = int(input("Enter Size of an array:"))
arr = []
for i in range(0,n):
    num = int(input())
    arr.append(num)

print("Array is ",arr)
arr.sort()
print(arr)
for i in range(1,n):
    if(arr[i]==arr[i-1]):
        print("Duplicate Element is ", arr[i])