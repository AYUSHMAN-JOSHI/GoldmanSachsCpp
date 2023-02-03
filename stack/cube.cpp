#include "cube.h"

namespace uiuc
{
    void cube::setLength(double lenght){
        length_= lenght;
    }

    double cube::getVolume(){
        return length_ * length_ *length_;
    }

    double cube::getSurfaceArea(){
        return 6 * length_ * length_;
    }
} // namespace uiuc
