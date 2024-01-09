#include <iostream>
#include <cmath>

class Nokta {
public:
    double x, y;
    Nokta() : x(0.0), y(0.0) {}
    Nokta(double x, double y) : x(x), y(y) {}
};

class Ucgen : public Nokta {
public:
    Nokta A, B, C;
    Ucgen(const Nokta& A, const Nokta& B, const Nokta& C) : A(A), B(B), C(C) {}
    // + operatörüne aşırı yükleme
    double operator+() const {
        double AB = std::sqrt(std::pow(B.x - A.x, 2) + std::pow(B.y - A.y, 2));
        double BC = std::sqrt(std::pow(C.x - B.x, 2) + std::pow(C.y - B.y, 2));
        double CA = std::sqrt(std::pow(A.x - C.x, 2) + std::pow(A.y - C.y, 2));
        return AB + BC + CA;
    }
};

int main() {
    // Üçgenin köşelerini belirle
    Nokta A(0.0, 0.0);
    Nokta B(4.0, 0.0);
    Nokta C(2.0, 3.0);

    // Ucgen sınıfını kullanarak üçgen oluştur
    Ucgen ucgen(A, B, C);

    // Üçgenin çevresini hesapla ve ekrana yazdır
    double cevre = +ucgen;
    std::cout << "Ucgenin Cevresi: " << cevre << std::endl;

    return 0;
}
