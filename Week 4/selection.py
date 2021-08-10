'''
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) 
from unsorted part and putting it at the beginning.
'''
def selection(arr):
    for i in range(len(arr)):
        min = i
        for j in range(i+1, len(arr)):
            if arr[j]<arr[min]:
                min = j
        arr[i],arr[min] = arr[min],arr[i]
    return arr

A = [25, 40, 1, 22 , 30]
sort = selection(A)
print(sort)