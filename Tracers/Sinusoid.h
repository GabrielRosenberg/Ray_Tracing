#ifndef RAY_TRACING_FROM_THE_GROUND_UP_SINUSOID_H
#define RAY_TRACING_FROM_THE_GROUND_UP_SINUSOID_H


#include "../Tracers/Tracer.h"

class Sinusoid : public Tracer {
public:
    Sinusoid();
    explicit Sinusoid(World* _worldPtr);

    ~Sinusoid() override;
    virtual RGBColor trace_ray(const Ray& ray) const;
};


#endif //RAY_TRACING_FROM_THE_GROUND_UP_SINUSOID_H
