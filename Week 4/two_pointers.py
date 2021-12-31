nums = [3, 5, 9, 2, 8, 10, 11]
target = 17

def two_pointers(nums,target):
    i = 0
    j = len(nums)-1
    while(i<j):
        if nums[i]+nums[j] == target:
            return [i,j]
        elif nums[i]+nums[j]>  target:
            j-=1
        else:
            i+=1
    return 0
print(two_pointers(nums,target))