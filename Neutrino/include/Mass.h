#ifndef MASS_H
#define MASS_H


class Mass
{
    public:

        Mass(double m);
        virtual ~Mass();

        double getMass () {
            return mass;
        }

        double updateMass (double nMass) {
            mass = nMass;
        }

    protected:

    private:

        double mass;

};

#endif // MASS_H
