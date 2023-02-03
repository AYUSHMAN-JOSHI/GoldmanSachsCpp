/**
 * Practice file for implementing .h file in cpp
 * 
 * @cite
 *      Wade Fagen-Uimschneider <waf@illinois.edu>
 * 
*/

// pragma once ensures header is not impemented multiple times inside a program.
#pragma once


// Multiple classes may contain classe of same name type
// use namespace to separate them
// They can be used to aggregate multiple classes in one space

namespace uiuc
{
    // we only write interface; implementation of it will be done in a .cpp file
    class cube
    {
        private:
            double length_;
        public:
            double getVolume();
            double getSurfaceArea();
            void setLength(double);
    };

} // namespace uiuc
