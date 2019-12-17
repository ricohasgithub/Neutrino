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

        protected:

        private:
    };

}

#endif // CONSTANTS_H
