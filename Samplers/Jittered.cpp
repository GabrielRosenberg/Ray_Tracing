#include <cmath>
#include "Jittered.h"
//#include "../Utilities/Maths.h"


Jittered::Jittered(int samples) : Sampler(samples) {
    generate_samples();
    setup_shuffled_indices();
}

void Jittered::generate_samples() {
    int n = (int) sqrt(num_samples);

    for (int p = 0; p < num_sets; p++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                Point2D sp(((float)k + random_float()) / (float)n, ((float)j + random_float()) / (float)n);
                samples.push_back(sp);
            }
        }
    }
}
