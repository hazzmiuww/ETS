#include <iostream>
#include <queue>
#include <string>

using namespace std;

void tampilkanAntrian(queue<string> q)
{
    if (q.empty())
    {
        cout << "Antrian kosong" << endl;
        return;
    }
    cout << "Kondisi antrian: ";
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
        if (!q.empty())
            cout << ", ";
    }
    cout << endl;
}

int main()
{
    queue<string> antrian;

    cout << "--- SIMULASI ANTRIAN ---" << endl;

    antrian.push("Mahasiswa A");
    antrian.push("Mahasiswa B");
    antrian.push("Mahasiswa C");
    cout << "\nLangkah 1: Mahasiswa A, B, C masuk antrian" << endl;
    tampilkanAntrian(antrian);

    cout << "\nLangkah 2: Mahasiswa pertama dilayani" << endl;
    cout << "Yang lagi dilayani (Front): " << antrian.front() << endl;
    antrian.pop();

    antrian.push("Mahasiswa D");
    cout << "\nLangkah 3: Tambah Mahasiswa D" << endl;
    cout << "" << antrian.back() << " masuk ke paling belakang (Rear)" << endl;

    cout << "\nLangkah 4: Tampilkan kondisi akhir" << endl;
    tampilkanAntrian(antrian);

    return 0;
}