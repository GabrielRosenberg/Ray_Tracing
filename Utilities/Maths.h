#ifndef __MATHS__
#define __MATHS__

#include <random>

inline double
max(double x0, double x1);

float
random_float();

int
random_int();

inline double
max(double x0, double x1)
{
	return((x0 > x1) ? x0 : x1);
}

inline float
random_float()  {
    static std::default_random_engine e;
    static std::uniform_real_distribution<> dis(0, 1); // rage 0 - 1
    return dis(e);
}

inline int
random_int() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,10000);
    return dist6(rng);
}

#endif
