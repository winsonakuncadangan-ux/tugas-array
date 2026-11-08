const suhu = [-3, 5, 0, -12, 8, 15, -1, 22];

const index_0 = suhu.indexOf(0);
if (index_0 !== -1) {
    console.log(`Nilai 0 ada dalam data suhu pada indeks ke-${index_0}.`);
} else {
    console.log("Nilai 0 tidak ada dalam data suhu.");
}

const suhu_positif = suhu.filter(x => x > 0);
console.log("Daftar suhu yang positif (> 0):", suhu_positif);
