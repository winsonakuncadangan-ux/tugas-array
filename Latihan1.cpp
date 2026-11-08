#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nilai_siswa = {60, 85, 40, 90, 75, 50, 95};

    auto it_85 = find(nilai_siswa.begin(), nilai_siswa.end(), 85);
    bool ada_85 = (it_85 != nilai_siswa.end());
    cout << "Apakah 85 ada dalam daftar nilai siswa? " << (ada_85 ? "True" : "False") << endl;

    vector<int> lulus;
    copy_if(nilai_siswa.begin(), nilai_siswa.end(), back_inserter(lulus), [](int x) {
        return x >= 75;
    });

    cout << "Daftar nilai siswa yang lulus (>= 75): ";
    for(int x : lulus) {
        cout << x << " ";
    }
    cout << endl;
}
