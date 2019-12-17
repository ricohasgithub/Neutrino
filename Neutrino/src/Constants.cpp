#include "Constants.h"

namespace Neutrino
{

    Constants::Constants()
    {
        //ctor
    }

    Constants::~Constants()
    {
        //dtor
    }

    // This method returns the gravitational acceleration felt
    double Constants::getGAccl(double m1, double m2, double r) {
        return ((G_CONST * m1 * m2) / (r * r));
    }

}
