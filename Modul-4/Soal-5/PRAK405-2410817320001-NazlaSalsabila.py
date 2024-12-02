def hitung_kelipatan():
    n = int(input("Masukkan banyaknya n: "))
    kelipatan = int(input("Masukkan kelipatan: "))
    total_keseluruhan = 0
    for i in range(1, n + 1):
        total_baris = 0
        ekspresi = ""
        for j in range(i, 0, -1):
            hasil = j * kelipatan
            total_baris += hasil
            ekspresi += f"({j} * {kelipatan})"
            if j > 1:
                ekspresi += " + "
        print(f"{ekspresi} = {total_baris}")
        total_keseluruhan += total_baris
    print(total_keseluruhan)

hitung_kelipatan()