#ifndef MASS_H
#define MASS_H

#include <vector>

namespace Neutrino
{

struct Point3D
{
    double x;
    double y;
    double z;
};

class Mass
{

public:

    Mass(double m, std::vector<double> nx, std::vector<double> ny, std::vector<double> nz);
    virtual ~Mass();

    double getMass ()
    {
        return mass;
    }

    double updateMass (double nMass)
    {
        mass = nMass;
    }

    std::vector<Point3D> getFrame ()
    {
        return frame;
    }

    // Get the average x value. Used in center of mass calculations
    double getCenterX()
    {

        double sum = 0.0;

        for (int p=0; p<frame.size(); p++)
        {
            sum += frame[p].x;
        }

        return (sum / frame.size());

    }

    // Get the average y value. Used in center of mass calculations
    double getCenterY()
    {

        double sum = 0.0;

        for (int p=0; p<frame.size(); p++)
        {
            sum += frame[p].y;
        }

        return (sum / frame.size());

    }

    // Get the average z value. Used in center of mass calculations
    double getCenterZ()
    {

        double sum = 0.0;

        for (int p=0; p<frame.size(); p++)
        {
            sum += frame[p].z;
        }

        return (sum / frame.size());

    }

protected:
    double mass;
    std::vector<Point3D> frame;

private:

};

}

#endif // MASS_H
