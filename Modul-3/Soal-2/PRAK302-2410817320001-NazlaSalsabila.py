bil = int(input("Masukan angka: "))

if bil >= 80:
    print("nilai huruf adalah A")
elif bil >= 70 and bil < 80:
    print("nilai huruf adalah B")
elif bil >= 60 and bil < 70:
    print("nilai huruf adalah C")
elif bil >= 50 and bil < 60:
    print("nilai huruf adalah D")
else:
    print("nilai huruf adalah E")