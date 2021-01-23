#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

int fonk(int a, int b)
{
    return (a + b)*(a + b) ;
}

inline int fonk_inline(int a, int b)
{
    return (a + b)*(a + b) ;
}

#define MULT(x, y) ((x)+(y)) * ((x)+(y))

int main( ) {
   
    chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
   
    for(int a = 0; a < 90000; ++a)
        for(int b = 0; b < 90000; ++b)
        {
            fonk(a,b);
           
        }
 
    end = std::chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = std::chrono::system_clock::to_time_t(end);
   
    cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
   
}

