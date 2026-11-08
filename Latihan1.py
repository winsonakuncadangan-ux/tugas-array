nilai_siswa = [60, 85, 40, 90, 75, 50, 95]

if 85 in nilai_siswa:
    print("Nilai 85 ada dalam daftar nilai siswa.")
else:
    print("Nilai 85 tidak ada dalam daftar nilai siswa.")

lulus = [x for x in nilai_siswa if x >= 75]
print("Daftar nilai siswa yang lulus (>= 75):", lulus)
