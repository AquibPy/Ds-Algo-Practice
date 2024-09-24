"""
There are bunch of squares. In color, the squares can be either black or white. 
Structurally, each square can be further divided into four squares. And this division can go on forever.

The "+" operation is the merge operation. The rules for merging is as follows:
1. Black + Black -> Black
2. White + White -> White
3. Black + White -> Black


Please provide a data structure to represent these squares, and write the merge() function.

Follow : https://drive.google.com/open?id=1NjwSDWo4pjp6DlJjUSQpPGrf2iCV0axP


Example
Square1 = "S W B B W"
Square2 = "S W S W B W B W S W S W W W B B W"


[W, [W, B, W, B], W, [W, [W, W, W, B], B, W]]
"""

square_1 = "S W S W B W B W S W S W W W B B W"
square_2 = "S W S W B W B W S W S W W W B B W"

def build(square):
    node = square.pop(0)
    if node == "W" or node == "B":
        return node
    else:
        return [build(square) for _  in range(4)]


def merge(square_1, square_2):
    list_1 = []
    for i in zip(square_1,square_2):
        if i[0]=="W":
            list_1.append(i[1])
        elif i[0]=='B':
            list_1.append(i[0])
        elif i[1]=='W':
            list_1.append(i[0])
        elif i[1]=='B':
            list_1.append(i[1])
        else:
            temp =  merge(i[0],i[1])
            list_1.append(temp)
    return list_1

print(build(square_1.split()))
print(merge(build(square_1.split()),build(square_2.split())))