#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace Neutrino {

    class Constants
    {
        public:
            Constants();
            virtual ~Constants();

            // Gravitational constants
            constexpr static double G_ACCL_EARTH = -9.8;
            constexpr static double G_CONST = 0.0000000000667;

            // This double function returns the gravitational acceleration that an object of mass m1 would experience at radius r on a planet with mass m2
            double getGAccl(double m1, double m2, double r);

        protected:

        private:
    };

}

#endif // CONSTANTS_H
