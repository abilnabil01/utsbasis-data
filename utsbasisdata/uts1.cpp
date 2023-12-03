#include <iostream>

class PersegiPanjang {
    
public :
    float panjang ;
    float lebar;

public :
    void setPanjang(float p){
        panjang = p;
    }
    float getPanjang() {
        return panjang;
    }
    void setLebar(float l){
        lebar = l;
    }
    float getLebar(){
        return lebar;
    }
    float hitungLuas(){
        return panjang*lebar;
    }
    float hitungKeliling(){
        return 2 * ( panjang + lebar );
    }
};

int main (){
    PersegiPanjang persegi;
    persegi.setPanjang(5.0);
    persegi.setLebar(3.0);
    float panjang = persegi.getPanjang();
    float lebar   = persegi.getLebar();
    float luas = persegi.hitungLuas();
    float keliling = persegi.hitungKeliling();

    std::cout << "Panjang: " << panjang << " Lebar: " << lebar << std::endl;
    std::cout << "Luas: " << luas << std::endl;
    std::cout << "Keliling: " << keliling << std::endl;

    return 0;
}
