#include <iostream>
#include <vector>
#include <string>

class CatatanAkademik {
private:
    std::string nama;
    std::string nomorInduk;
    std::vector<std::string> daftarKuliah;

public:
    // Setter untuk nama
    void setNama(const std::string& _nama) {
        nama = _nama;
    }

    // Getter untuk nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk nomor induk mahasiswa
    void setNomorInduk(const std::string& nomor) {
        nomorInduk = nomor;
    }

    // Getter untuk nomor induk mahasiswa
    std::string getNomorInduk() {
        return nomorInduk;
    }

    // Method untuk menambah mata kuliah ke daftar
    void tambahMataKuliah(const std::string& mataKuliah) {
        daftarKuliah.push_back(mataKuliah);
    }

    // Method untuk menghapus mata kuliah dari daftar
    void hapusMataKuliah(const std::string& mataKuliah) {
        for (auto it = daftarKuliah.begin(); it != daftarKuliah.end(); ++it) {
            if (*it == mataKuliah) {
                daftarKuliah.erase(it);
                break;
            }
        }
    }

    // Method untuk menghitung nilai rata-rata
    double hitungRataRata() {
        if (daftarKuliah.empty()) {
            return 0.0;
        }

        double total = 0.0;
        for (const std::string& mataKuliah : daftarKuliah) {
            // Misalnya, di sini Anda akan memasukkan logika untuk menghitung nilai untuk setiap mata kuliah
            // Sebagai contoh, saya hanya memberikan nilai acak
            total += 75.0; // Nilai contoh
        }
        return total / daftarKuliah.size();
    }

    // Method untuk menampilkan catatan akademik
    void tampilkanCatatanAkademik() {
        std::cout << "Catatan Akademik" << std::endl;
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Nomor Induk: " << nomorInduk << std::endl;
        std::cout << "Daftar Mata Kuliah:" << std::endl;
        for (const std::string& mataKuliah : daftarKuliah) {
            std::cout << "- " << mataKuliah << std::endl;
        }
        double rataRata = hitungRataRata();
        std::cout << "Nilai Rata-rata: " << rataRata << std::endl;
    }
};

int main() {
    CatatanAkademik catatan;

    catatan.setNama("mamad");
    catatan.setNomorInduk("202211004");

    catatan.tambahMataKuliah("Matematika");
    catatan.tambahMataKuliah("Fisika");
    catatan.tambahMataKuliah("Bahasa Inggris");

    catatan.hapusMataKuliah("Fisika");

    catatan.tampilkanCatatanAkademik();

    return 0;
}