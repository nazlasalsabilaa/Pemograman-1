def main():
    kelipatan = int(input("Masukkan bilangan kelipatan yang dirubah menjadi simbol: "))
    simbol = input("Masukkan simbol yang akan menggantikan bilangan kelipatan: ")
    
    for i in range(1, 51):
        if i % kelipatan == 0:
            print(simbol, end=" ")
        else:
            print(i, end=" ")
    
main()