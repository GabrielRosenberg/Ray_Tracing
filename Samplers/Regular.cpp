// 	Copyright (C) Kevin Suffern 2000-2007.
//	This C++ code is for non-commercial purposes only.
//	This C++ code is licensed under the GNU General Public License Version 2.
//	See the file COPYING.txt for the full license.

#include <cmath>
#include "Regular.h"

// ---------------------------------------------------------------- default constructor
	
Regular::Regular() : Sampler() {}


// ---------------------------------------------------------------- constructor


// ---------------------------------------------------------------- copy constructor

Regular::Regular(const Regular& u) = default;

// ---------------------------------------------------------------- assignment operator

Regular& Regular::operator=(const Regular& rhs)	{
	if (this == &rhs)
		return (*this);
		
	Sampler::operator=(rhs);

	return (*this);
}

// ---------------------------------------------------------------- clone

Regular* Regular::clone() const {
	return (new Regular(*this));
}

// ---------------------------------------------------------------- destructor			

Regular::~Regular() = default;


// ---------------------------------------------------------------- generate_samples

Point2D Regular::sample_unit_square() {
    return Point2D{0.5, 0.5};
}

void Regular::generate_samples() {}


