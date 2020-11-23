n = int(input("Enter the Size of First Array: "))
m = int(input("Enter the Size of Second Array: "))
arr1 = []
arr2 = []
print("Enter the Element in First Array: ")
for i in range(0,n):
    num = int(input())
    arr1.append(num)


print("Enter the Element in Second Array: ")
for i in range(0,m):
    num = int(input())
    arr2.append(num)

print("Merging Two Arrays", sorted(arr1+arr2))