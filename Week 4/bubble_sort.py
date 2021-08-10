def bubble(arr):
    for i in range(len(arr)):
        for j in range(0,len(arr)-i-1):
            if(arr[j]>arr[j+1]):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
    return arr

A = [25, 40, 1, 22 , 30]
sort = bubble(A)
print(sort)