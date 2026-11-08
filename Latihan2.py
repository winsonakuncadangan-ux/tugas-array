produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]

if "Keyboard" in produk:
    idx = produk.index("Keyboard")
    print(f"Produk 'Keyboard' ditemukan pada indeks ke-{idx}.")
else:
    print("Produk 'Keyboard' tidak ditemukan.")

produk_panjang = [x for x in produk if len(x) > 5]
print("Daftar produk dengan panjang nama > 5 karakter:", produk_panjang)
