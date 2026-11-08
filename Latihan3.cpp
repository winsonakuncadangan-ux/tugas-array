#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    auto it_0 = find(suhu.begin(), suhu.end(), 0);
    bool ada_0 = (it_0 != suhu.end());
    if (ada_0) {
        int index = distance(suhu.begin(), it_0);
        cout << "Nilai 0 ada dalam data suhu pada indeks ke-" << index << "." << endl;
    } else {
        cout << "Nilai 0 tidak ada dalam data suhu." << endl;
    }

    vector<int> suhu_positif;
    copy_if(suhu.begin(), suhu.end(), back_inserter(suhu_positif), [](int x) {
        return x > 0;
    });

    cout << "Daftar suhu yang positif (> 0): ";
    for (int x : suhu_positif) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
