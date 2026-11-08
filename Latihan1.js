const nilai_siswa = [60, 85, 40, 90, 75, 50, 95];

if (nilai_siswa.includes(85)) {
    console.log("Nilai 85 ada dalam daftar nilai siswa.");
} else {
    console.log("Nilai 85 tidak ada dalam daftar nilai siswa.");
}

const lulus = nilai_siswa.filter(x => x >= 75);
console.log("Daftar nilai siswa yang lulus (>= 75):", lulus);
