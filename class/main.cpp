#include <iostream>
#include "cube.h"

using namespace std;
using namespace uiuc;

int main(int argc, char const *argv[])
{
    cube c;

    c.setLength(3.48);
    double volume = c.getVolume();

    cout<<"Volume: "<< volume << endl;

    return 0;
}
