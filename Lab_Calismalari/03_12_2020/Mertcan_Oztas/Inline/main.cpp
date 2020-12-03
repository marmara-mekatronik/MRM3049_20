#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

int calc(int x, int y, int z);
inline int calc_inline(int x, int y, int z);

int calc(int x, int y, int z)
{
    return (x + y) * (y + z) * (z + x);
}

int calc_inline(int x, int y, int z)
{
    return (x + y) * (y + z) * (z + x);
}

#define calculate(a,b,c) ((a)+(b))*((b)+(c))*((c)+(a));

int main()
{
    chrono::time_point<chrono::system_clock>  inline_start, inline_end, define_start, define_end;
    inline_start = chrono::system_clock::now();
    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            for (int k=0; k<1000;++k)
            {
                calc_inline(i, j, k);
            }
        }
    }
    inline_end = chrono::system_clock::now();

    chrono::duration<double> ipassed_time = inline_end - inline_start;
    time_t istart_time = chrono::system_clock::to_time_t(inline_start);
    time_t iend_time = chrono::system_clock::to_time_t(inline_end);

    cout << "calc_inline/n" << endl;
    cout << "Start time     :" << ctime(&istart_time) << endl;
    cout << "End time       :" << ctime(&iend_time) << endl;
    cout << "Time passed    :" << ipassed_time.count() << endl;
    

    define_start = chrono::system_clock::now();
    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            for (int k = 0; k < 1000; ++k)
            {
                calculate(i, j, k);
            }
        }
    }
    define_end = chrono::system_clock::now();
    
    chrono::duration<double> dpassed_time = define_end - define_start;
    time_t dstart_time = chrono::system_clock::to_time_t(define_start);
    time_t dend_time = chrono::system_clock::to_time_t(define_end);

    cout << "#define" << endl;
    cout << "Start time     :" << ctime(&dstart_time) << endl;
    cout << "End time       :" << ctime(&dend_time) << endl;
    cout << "Time passed    :" << dpassed_time.count() << endl;

    return 0;
}
