'''
QUESTION 1: Alice has some cards with numbers written on them. 
She arranges the cards in decreasing order, and lays them out face down in a sequence on a table.
She challenges Bob to pick out the card containing a given number by turning over as few cards as possible.
Write a function to help Bob locate the card
'''
def binary_search(card,num):
    low, high = 0, len(card) - 1
    while low<=high:
        mid = (low + high) // 2
        mid_number = card[mid]
        if mid_number==num:
            return mid
        elif mid_number < num:
            high = mid - 1
        elif mid_number > num:
            low = mid + 1
    return "Element Doesn't Exist!!!!!!"

card = [13, 11, 10, 7, 4, 3, 1, 0]
num = 11
result = binary_search(card,num)
print(result)