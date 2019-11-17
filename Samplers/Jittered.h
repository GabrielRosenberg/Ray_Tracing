#ifndef RAY_TRACING_FROM_THE_GROUND_UP_JITTERED_H
#define RAY_TRACING_FROM_THE_GROUND_UP_JITTERED_H


#include "Sampler.h"

class Jittered : public Sampler {
private:
    void generate_samples() override;
public:
    explicit Jittered(int);
};


#endif //RAY_TRACING_FROM_THE_GROUND_UP_JITTERED_H
