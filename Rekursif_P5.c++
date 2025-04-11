#include <iostream>
using namespace std;

// Fungsi rekursif untuk menjumlahkan bilangan genap dari 1 hingga N
// Jika N genap, tambahkan N ke hasil
// Jika N ganjil, kurangi 1 dari N, lalu tambahkan ke hasil
int penambahanNomorGenap(int N) {
    // Rekursi berhenti ketika N = 0
    if (N <= 0) {
        return 0;
    }
    
    // Jika N ganjil, kurangi 1
    if (N % 2 != 0) {
        N -= 1;
    }
    
    // Jika N genap (baik asli atau setelah dikurangi 1),
    // tambahkan N ke hasil dan lanjutkan rekursi dengan N-2
    return N + penambahanNomorGenap(N - 2);
}

int main() {
    int N;
    
    cout << "Masukkan nilai N: ";
    cin >> N;
    
    int result = penambahanNomorGenap(N);
    cout << "Jumlah bilangan genap dari 1 hingga " << N << " adalah: " << result << endl;
    
    return 0;
}