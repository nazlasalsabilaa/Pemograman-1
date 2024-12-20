n1, n2 = map(int, input("Masukkan n1 dan n2: ").split())
if n1 != n2:
    print("Jumlah tidak sama")
else:
    print(f"Masukkan {n1} angka untuk baris pertama:", end=" ")
    baris1 = list(map(int, input().split()))
    print(f"Masukkan {n2} angka untuk baris kedua:", end=" ")
    baris2 = list(map(int, input().split()))
    hasil = [baris1[i] * baris2[i] for i in range(n1)]
    print("Hasil perkalian:")
    print(" ".join(map(str, hasil)))