#include <iostream>
#include <string>

class Mobil {
private:
    std::string nama;
    std::string model;
    int kecepatan;

public:
    // Setter untuk nama
    void setNama(const std::string& _nama) {
        nama = _nama;
    }

    // Getter untuk nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk model
    void setModel(const std::string& _model) {
        model = _model;
    }

    // Getter untuk model
    std::string getModel() {
        return model;
    }

    // Setter untuk kecepatan
    void setKecepatan(int _kecepatan) {
        kecepatan = _kecepatan;
    }

    // Getter untuk kecepatan
    int getKecepatan() {
        return kecepatan;
    }

    // Method untuk mempercepat mobil
    void percepat(int nilai) {
        kecepatan += nilai;
    }

    // Method untuk memperlambat mobil
    void perlambat(int nilai) {
        kecepatan -= nilai;
    }

    // Method untuk menampilkan informasi mobil
    void tampilkanInformasi() {
        std::cout << "Informasi Mobil" << std::endl;
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Kecepatan: " << kecepatan << " km/h" << std::endl;
    }
};

int main() {
    Mobil mobil;

    mobil.setNama("rimba");
    mobil.setModel("amfibi");
    mobil.setKecepatan(60);

    mobil.tampilkanInformasi();

    mobil.percepat(20);
    mobil.perlambat(10);

    std::cout << "\nSetelah melakukan aksi percepatan dan perlambatan:" << std::endl;
    mobil.tampilkanInformasi();

    return 0;
}