total_detik = int(input("Masukkan jumlah detik: "))

hari = total_detik // 86400
total_detik %= 86400

jam = total_detik // 3600
total_detik %= 3600

menit = total_detik // 60
detik = total_detik % 60

if hari > 0:
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else:
    print(f"{jam:02}:{menit:02}:{detik:02}")