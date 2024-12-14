def reverse(x):
    reversed_num = 0
    while x > 0:
        reversed_num = reversed_num * 10 + x % 10
        x //= 10
    return reversed_num

A, B = map(int, input().split())

A_rev = reverse(A)
B_rev = reverse(B)

C = A_rev + B_rev

print(reverse(C))