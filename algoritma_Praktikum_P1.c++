#include <iostream>
#include <vector>

using namespace std;

// Mengdefinisikan Struck Game ( menginisialisasi )
// struck ( tempat menyimpan sebuah data seperti array tetapi bisa banyak tipe data )
struct Game
{
    string judul;
    string developer;
    int harga;
};

// Vector untuk struck dari game agar bisa menambah, mengurang ( hapus ) / Seperti Database sementara
vector<Game> koleksiGame;

// feature untuk melihat semua daftar game yang ada di vector koleksiGame
void lihatDaftarGame() {

    cout << " Daftar Game " << endl;

    // Pengulangan untuk mengambil semua nilai yang ada di vector
    for (int i = 0; i < koleksiGame.size(); i++)
    {
        cout << i + 1 << ". '" << koleksiGame[i].judul << "'";
        cout << " (" << koleksiGame[i].harga << "$)";
        cout << " Buatan " << koleksiGame[i].developer << endl;

    }
    
}

// feature untuk menambahkan game ke vector koleksiGame ( di dalamnya harus sesuai dengan element yang ingin di tambahkan ke dalam si struct)
void tambahGame(string judul,string developer,int harga) {
    // Simpan Game Baru disimpan di variabel 
    Game gameBaru = {judul,developer,harga};

    // Kirim Game Baru Dari Variabel gameBaru
    koleksiGame.push_back(gameBaru);
}

void deleteGame(int nomor) {
    // Menghapus Game Berdasarkan Nomor Di lihatDaftarGame
    koleksiGame.erase(koleksiGame.begin() + nomor - 1);
}

int main () {

// copy ALT + SHIFT + panah kebawah ( keypad )

// memanggil feature feature

    // feature tambahGame ( dengan nilai di dalamnya) catatan : urutan harus sesuai dengan yang di void
    tambahGame("Monster Hunter Wild", "CAPCOM", 80);
    tambahGame("Persona 5 Royal", "ATLUS", 50);
    tambahGame("Super Mario Oddysey", "NINTENDO", 75);

    // feature melihat semua daftar game di dalam vector
    lihatDaftarGame();
    // feature menghapus game di dalam vector
    deleteGame(2);
    // memanggil feature melihat semua daftar di dalam vector game kembali
    lihatDaftarGame();
}
