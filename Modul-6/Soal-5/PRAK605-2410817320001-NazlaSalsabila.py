n = int(input("Masukkan ordo matriks nxn: "))
A = []
print("Matriks A")
for i in range(n):
    A.append(list(map(int, input().split())))

B = []
print("Matriks B")
for i in range(n):
    B.append(list(map(int, input().split())))

C = [[0] * n for _ in range(n)]

for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]

print("Matriks AXB")
for row in C:
    print(" ".join(map(str, row)))