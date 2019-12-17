#include "Gravity.h"
#include "Constants.h"

using namespace Neutrino;

Gravity::Gravity()
{
    //ctor
}

Gravity::~Gravity()
{
    //dtor
}

// This method returns the gravitational acceleration felt
double Gravity::getGAccl(double m1, double m2, double r) {
    return ((Constants::G_CONST * m1 * m2) / (r * r));
}
