kode = input("Masukkan kode Shikamaru: ")
pesan = input("Masukkan pesan yang diterima: ")

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    hasil = []
    jumlah_bintang = 0
    jumlah_pagar = 0

    for k, p in zip(kode, pesan):
        if k == " " and p == " ":
            hasil.append(" ")
        elif k == p:
            hasil.append("*")
            jumlah_bintang += 1
        else:
            hasil.append("#")
            jumlah_pagar += 1

    print("".join(hasil))
    print(f"* = {jumlah_bintang}")
    print(f"# = {jumlah_pagar}")

    if jumlah_bintang >= jumlah_pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")