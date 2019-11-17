#ifndef __REGULAR__
#define __REGULAR__


#include "Sampler.h"

class Regular: public Sampler {
public:
    Regular();
    Regular(const Regular& u);
    Regular& operator=(const Regular& rhs);
    virtual Regular* clone() const;
    ~Regular() override;
    Point2D sample_unit_square() override;
    void generate_samples() override;
};

#endif

