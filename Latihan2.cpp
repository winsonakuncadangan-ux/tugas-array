#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};

    auto it = find(produk.begin(), produk.end(), "Keyboard");
    if (it != produk.end()) {
        int index = distance(produk.begin(), it);
        cout << "Produk 'Keyboard' ditemukan pada indeks ke-" << index << "." << endl;
    } else {
        cout << "Produk 'Keyboard' tidak ditemukan." << endl;
    }

    vector<string> produk_panjang;
    copy_if(produk.begin(), produk.end(), back_inserter(produk_panjang), [](const string& x) {
        return x.length() > 5;
    });

    cout << "Daftar produk dengan panjang nama > 5 karakter: ";
    for (const string& item : produk_panjang) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
