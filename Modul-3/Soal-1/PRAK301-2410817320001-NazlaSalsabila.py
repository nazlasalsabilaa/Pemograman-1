a, b, c = map(int, input("Masukkan tiga angka: ").split())

if a > b:
    a, b = b, a
if a > c:
    a, c = c, a
if b > c:
    b, c = c, b

print(f"Hasil dari pengurutan dari nilai terkecil ke terbesar: {a} {b} {c}")