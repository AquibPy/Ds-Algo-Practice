n = int(input("Enter a size of an Array: "))
arr = []
for i in range(n):
    num = int(input())
    arr.append(num)
print(arr)

kth = int(input("which kth smallest you want?"))
arr.sort()
print("The kth smallest is ", arr[kth-1])


# another approch for sorting element
# my_list = [-15, -26, 15, 1, 23, -64, 23, 76]
# new_list = []

# while my_list:
#     min = my_list[0]  
#     for x in my_list: 
#         if x < min:
#             min = x
#     new_list.append(min)
#     my_list.remove(min)    

# print(new_list)