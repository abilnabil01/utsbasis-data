#include <iostream>
#include <string>

class RekeningBank {
public:
    std::string namaPemilik;
    double saldo;

public:
    // Setter untuk nama pemilik
    void setNamaPemilik(const std::string& nama) {
        namaPemilik = nama;
    }

    // Getter untuk nama pemilik
    std::string getNamaPemilik() {
        return namaPemilik;
    }

    // Method untuk menambah saldo
    void tambahSaldo(double jumlah) {
        saldo += jumlah;
    }

    // Method untuk mengurangi saldo
    void kurangiSaldo(double jumlah) {
        if (saldo >= jumlah) {
            saldo -= jumlah;
        } else {
            std::cout << "Saldo tidak mencukupi untuk penarikan ini." << std::endl;
        }
    }

    // Method untuk menampilkan informasi rekening
    void tampilkanInformasi() {
        std::cout << "Informasi Rekening" << std::endl;
        std::cout << "Nama Pemilik: " << namaPemilik << std::endl;
        std::cout << "Saldo: " << saldo << std::endl;
    }
};

int main() {
    RekeningBank rekening;

    // Set nama pemilik rekening
    rekening.setNamaPemilik("Mamad");

    // Menambah saldo
    rekening.tambahSaldo(10000.0);

    // Mengurangi saldo
    rekening.kurangiSaldo(200.0);

    // Menampilkan informasi rekening
    rekening.tampilkanInformasi();

    return 0;
}