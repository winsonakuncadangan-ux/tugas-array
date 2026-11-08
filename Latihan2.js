const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

const index = produk.indexOf("Keyboard");
if (index !== -1) {
    console.log(`Produk 'Keyboard' ditemukan pada indeks ke-${index}.`);
} else {
    console.log("Produk 'Keyboard' tidak ditemukan.");
}

const produk_panjang = produk.filter(x => x.length > 5);
console.log("Daftar produk dengan panjang nama > 5 karakter:", produk_panjang);
