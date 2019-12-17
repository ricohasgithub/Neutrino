#ifndef GRAVITY_H
#define GRAVITY_H

namespace Neutrino {

    class Gravity
    {
        public:
            Gravity();
            virtual ~Gravity();

            // This double function returns the gravitational acceleration that an object of mass m1 would experience at radius r on a planet with mass m2
            double getGAccl(double m1, double m2, double r);

        protected:

        private:
    };

}

#endif // GRAVITY_H
