#include <iostream>
#include <cmath>

const float PI = 3.14159;

class Tabung {
private:
    float jariJari;
    float tinggi;

public:
    // Setter untuk jari-jari
    void setJariJari(float r) {
        jariJari = r;
    }

    // Getter untuk jari-jari
    float getJariJari() {
        return jariJari;
    }

    // Setter untuk tinggi
    void setTinggi(float h) {
        tinggi = h;
    }

    // Getter untuk tinggi
    float getTinggi() {
        return tinggi;
    }

    // Method untuk menghitung luas permukaan tabung
    float hitungLuasPermukaan() {
        return 2 * PI * jariJari * (jariJari + tinggi);
    }

    // Method untuk menghitung volume tabung
    float hitungVolume() {
        return PI * pow(jariJari, 2) * tinggi;
    }
};

int main() {
    Tabung tabung;

    // Mengatur nilai jari-jari dan tinggi menggunakan setter
    tabung.setJariJari(4.0);
    tabung.setTinggi(6.0);

    // Mendapatkan nilai jari-jari dan tinggi menggunakan getter
    float jariJari = tabung.getJariJari();
    float tinggi = tabung.getTinggi();

    // Menghitung luas permukaan dan volume menggunakan method yang tersedia
    float luasPermukaan = tabung.hitungLuasPermukaan();
    float volume = tabung.hitungVolume();

    std::cout << "Jari-jari: " << jariJari << " Tinggi: " << tinggi << std::endl;
    std::cout << "Luas Permukaan: " << luasPermukaan << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}
