def kalkulator():
    nama = "NAZLASALSABILA"
    while True:
        print("Pilih program:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
        try:
            pilihan = int(input("Masukkan Pilihan: "))
            if pilihan == 5:
                print(f"Terimakasih, telah menggunakan kalkulator {nama}")
                break
            if pilihan not in [1, 2, 3, 4]:
                print("Input anda salah, silahkan coba lagi")
                continue
            a, b = float(input("Masukkan nilai pertama: ")), float(input("Masukkan nilai kedua: "))
            hasil = a + b if pilihan == 1 else a - b if pilihan == 2 else a * b if pilihan == 3 else (a / b if b != 0 else "Pembagian dengan nol tidak diperbolehkan!")
            print(f"Hasil {'penjumlahan' if pilihan == 1 else 'pengurangan' if pilihan == 2 else 'perkalian' if pilihan == 3 else 'pembagian'} antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}" if isinstance(hasil, float) else hasil)
        except ValueError:
            print("Input anda salah, silahkan coba lagi")

kalkulator()