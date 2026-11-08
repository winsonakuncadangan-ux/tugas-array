suhu = [-3, 5, 0, -12, 8, 15, -1, 22]

if 0 in suhu:
    idx = suhu.index(0)
    print(f"Nilai 0 ada dalam data suhu pada indeks ke-{idx}.")
else:
    print("Nilai 0 tidak ada dalam data suhu.")

suhu_positif = [x for x in suhu if x > 0]
print("Daftar suhu yang positif (> 0):", suhu_positif)
