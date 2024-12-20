def print_matrix(baris, kolom, data):
    index = 0
    for i in range(baris):
        for j in range(kolom):
            if j != kolom - 1:
                print(data[index], end=" ")
            else:
                print(data[index])
            index += 1

print("Masukkan jumlah baris dan kolom:", end=" ")
baris, kolom = map(int, input().split())
print("Masukkan angka-angka dalam matriks:", end=" ")
data = list(map(int, input().split()))
print_matrix(baris, kolom, data)