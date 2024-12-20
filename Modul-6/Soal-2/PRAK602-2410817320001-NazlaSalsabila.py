n = int(input("Masukkan jumlah ruangan: "))
zetsu = list(map(int, input("Masukkan banyaknya zetsu putih pada setiap ruangan: ").split()))

for i in range(n):
    print(zetsu[i] * (i + 1), end=" ")
print()