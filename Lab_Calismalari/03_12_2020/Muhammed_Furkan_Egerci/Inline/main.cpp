#include <iostream>
#include <ctime>
#include <chrono>

inline int fonk_inline(int a, int b,int c, int d);


inline int fonk_inline(int a, int b,int c, int d ) {
    return (((a + b) * (a - b))* c + d);
}


int main() {

    std::chrono::time_point<std::chrono::system_clock> d_islemb, d_islems;
    d_islemb = std::chrono::system_clock::now();

    for (int a = 0; a < 400; a++) {
        for (int b = 0; b < 400; b++) {
            for (int c = 0; c < 400; c++) {
                for (int d = 0; d < 100; d++) {

                    fonk_inline(a, b, c, d);
                }
            }
        }
    }

    d_islems = std::chrono::system_clock::now();

    std::chrono::duration<double> gecen_zaman = d_islems - d_islemb;
    std::time_t baslangic_zamani = std::chrono::system_clock::to_time_t(d_islemb);
    std::time_t bitis_zamani = std::chrono::system_clock::to_time_t(d_islems);

    std::cout << "Isleme baslanilan zaman  : " << std::ctime(&baslangic_zamani) << std::endl;
    std::cout << "Islemin bitis zamani  : " << std::ctime(&bitis_zamani) << std::endl;
    std::cout << "Islemin gerceklesmesi icin gecen sure : " << gecen_zaman.count() << " saniye" << std::endl;

    return 0;
}
