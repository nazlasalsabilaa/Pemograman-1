def hitung(nilai1, nilai2):
    return nilai1 - nilai2

def mutlak(angka):
    if angka < 0:
        return -angka
    return angka

a, c, b, d = map(int, input().split())

Hasil = mutlak(hitung(a, b)) + mutlak(hitung(c, d))

print(mutlak(Hasil))