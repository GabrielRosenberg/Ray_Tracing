//
// Created by rosen on 11/11/2019.
//

#include "Sampler.h"
#include <algorithm>
#include <random>
//#include "../Utilities/Maths.h"

Sampler::Sampler(int samples, int sets) : num_samples{samples}, num_sets{sets} {};
Sampler::Sampler(int samples) : num_samples(samples), num_sets{86} {};
Sampler::Sampler() = default;

/*!
 * Returns a randomly picked sample point.
 * @return 2D sample point
 */
Point2D Sampler::sample_unit_square() {
    if (count % num_samples == 0)
        jump = (random_int() % num_sets) * num_samples;
    return samples[jump + shuffled_indices[jump + count++ % num_samples]];     // Ska det verkligen vara + jump två gånger?
}

/*!
 * This method puts all indices for the "unit square samples" in an vector
 * and shuffles the array with a uniform distribution. It then puts equally
 * many indices in the vector for every set and reshuffles for every set.
 */
void Sampler::setup_shuffled_indices() {
    shuffled_indices.reserve(num_samples * num_sets);
    std::vector<int> indices;

    for (int j = 0; j < num_samples; j++)
        indices.push_back(j);
    for (int p = 0; p < num_sets; p++) {
        std::shuffle(indices.begin(), indices.end(), std::mt19937(std::random_device()()));

        for (int j = 0; j < num_samples; j++)
            shuffled_indices.push_back(indices[j]);
    }
 }

Sampler::~Sampler() {}
