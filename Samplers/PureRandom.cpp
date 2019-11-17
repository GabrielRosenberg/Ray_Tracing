#include <cmath>
#include <iostream>
#include "PureRandom.h"

PureRandom::PureRandom(int samples) : Sampler(samples) {}

void PureRandom::generate_samples() {}


Point2D PureRandom::sample_unit_square() {
    return Point2D{random_float(), random_float()};     // Ska det verkligen vara + jump två gånger?
}