#include <iostream>
#include "cube.h"


using namespace std;
using namespace uiuc;

cube createUnitCube(){
    cube unit;
    unit.setLength(1);
    return unit;
}

int main(int argc, char const *argv[])
{
    cube C = createUnitCube();
    cout << "Surface Area of Cube = " << C.getSurfaceArea() << endl;
    cout << "Volume of Cube = " << C.getVolume() << endl;

    return 0;
}

