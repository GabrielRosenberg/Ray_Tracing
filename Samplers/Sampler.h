#ifndef RAY_TRACING_FROM_THE_GROUND_UP_SAMPLER_H
#define RAY_TRACING_FROM_THE_GROUND_UP_SAMPLER_H


#include <vector>
#include "../Utilities/Point3D.h"
#include "../Utilities/Point2D.h"
#include "../Utilities/Maths.h"

class Sampler {
public:
    Sampler();
    Sampler(int);
    Sampler(int, int);

    virtual void generate_samples() = 0;
    virtual ~Sampler();
    void setup_shuffled_indices();
    void shuffle_samples();

    virtual Point2D sample_unit_square();
    int get_num_samples();


protected:
    int num_samples {1};                        // Number of samplepoints in a pattern
    int num_sets {1};                           // The number of sample sets stored (we want different sets so we repeat less sample patterns)
    std::vector<Point2D> samples {};           // Sample points on a unit square
    std::vector<int> shuffled_indices {};      // shuffled samples array indices
    unsigned long count {0};                // The current number of sample points used
    int jump {0};                           // random index jumps (to access a different set)

};

inline int Sampler::get_num_samples() {
    return num_samples;
}

#endif //RAY_TRACING_FROM_THE_GROUND_UP_SAMPLER_H
