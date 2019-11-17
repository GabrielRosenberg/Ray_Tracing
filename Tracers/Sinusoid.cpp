#include "Sinusoid.h"
#include "../World/World.h"
#include <cmath>
#include <iostream>


Sinusoid::Sinusoid() : Tracer() {}


// -------------------------------------------------------------------- constructor

Sinusoid::Sinusoid(World* _worldPtr) : Tracer(_worldPtr) {}


// -------------------------------------------------------------------- destructor

Sinusoid::~Sinusoid() {}


// -------------------------------------------------------------------- trace_ray

RGBColor Sinusoid::trace_ray(const Ray& ray) const {
    ShadeRec	sr(*world_ptr); 	// not used
    double    	t;  				// not used
    float x = ((float)ray.o.x + (float)world_ptr->vp.vres* (float)world_ptr->vp.s / (float)2.0) / (float)50.0;
    float y = ((float)ray.o.y + (float)world_ptr->vp.hres* (float)world_ptr->vp.s / (float)2.0) / (float)50.0;
    //std::cout << 0.5*(1+std::sin(ray.o.x*ray.o.x*ray.o.y*ray.o.y)) << " ";
    return RGBColor(0.5*(1+std::sin(x*x*y*y)));
}


