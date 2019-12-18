#include "Mass.h"

using namespace Neutrino;

Mass::Mass(double m, std::vector<double> nx, std::vector<double> ny, std::vector<double> nz)
{
    mass = m;
    // Assume size of vectors x, y and z are of equal length
    for (int p=0; p<nx.size(); p++) {
        Point3D temp;
        temp.x = nx[p];
        temp.y = ny[p];
        temp.z = nz[p];
        frame.push_back(temp);
    }
}

Mass::~Mass()
{
}
