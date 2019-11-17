
#ifndef RAY_TRACING_FROM_THE_GROUND_UP_PURERANDOM_H
#define RAY_TRACING_FROM_THE_GROUND_UP_PURERANDOM_H


#include "Sampler.h"

class PureRandom : public Sampler {

    private:

        void
        generate_samples() override;

    public:

        explicit
        PureRandom(int);

        Point2D
        sample_unit_square();
};


#endif //RAY_TRACING_FROM_THE_GROUND_UP_PURERANDOM_H
