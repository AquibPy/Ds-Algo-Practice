def kadane_algorithm(arr,size):
    max_so_far = 0
    max_end_here = 0
    for i in range(0,size):
        max_end_here +=arr[i]
        if(max_so_far<max_end_here):
            max_so_far = max_end_here
        if(max_end_here<0):
            max_end_here = 0
    return max_so_far

n = int(input("Enter the Size of an Array: "))
arr = []
print("Enter the Element in Array: ")
for i in range(0,n):
    num = int(input())
    arr.append(num)

print('Maximun Contiguous sum is ', kadane_algorithm(arr,n))
