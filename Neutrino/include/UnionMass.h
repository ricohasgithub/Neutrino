#ifndef UNIONMASS_H
#define UNIONMASS_H

#include <vector>
#include "Mass.h"

namespace Neutrino {

    class UnionMass
    {
        public:
            UnionMass(std::vector<Mass> objects);
            virtual ~UnionMass();

            std::vector<Mass> objects;

            Point3D getCenterOfMass () {

                Point3D com;

                double totalX;
                double totalY;
                double totalZ;

                for (Mass m : objects) {
                    totalX += m.getCenterX();
                    totalY += m.getCenterY();
                    totalZ += m.getCenterZ();
                }

                com.x = totalX/objects.size();
                com.y = totalY/objects.size();
                com.z = totalZ/objects.size();

                return com;

            }

        protected:

        private:
    };

}

#endif // UNIONMASS_H
