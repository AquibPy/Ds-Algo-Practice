l1,l2 = [],[]
n1 = int(input("Enter Size of Set 1 : "))
print("Enter Element in Set 1: ")
for i in range(n1):
    num = int(input())
    l1.append(num)

n2 = int(input("Enter Size of Set 2 : "))
print("Enter Element in Set 2:")
for i in range(n2):
    num = int(input())
    l2.append(num)

print("Set 1 is ", l1)
print("Set 2 is ", l2)

s1 = set(l1)
s2 = set(l2)

print("Union of Two Set is ", s1.union(s2))
print("Intersection of Two Set is ", s1.intersection(s2))