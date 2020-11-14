#Given an array of size N containing 0s, 1s, and 2s; sort the array in ascending order.
arr = [0,1,0,0,1,1,2,1,2]
print("The Array is ", arr)
arr_sort = []
cnt0,cnt1,cnt2 = 0,0,0
for i in arr:
    if i == 0:
        cnt0 +=1
    elif i == 1:
        cnt1 +=1
    else:
        cnt2 +=1

while(cnt0>0):
    arr_sort.append(0)
    cnt0 -=1
while(cnt1>0):
    arr_sort.append(1)
    cnt1 -=1
while(cnt2>0):
    arr_sort.append(2)
    cnt2 -=1

print("The Sorted Array is ", arr_sort)