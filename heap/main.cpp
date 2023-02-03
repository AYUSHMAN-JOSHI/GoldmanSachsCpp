#include <iostream>
#include "cube.h"

using namespace std;
using namespace uiuc;

int main(int argc, char const *argv[])
{
    int *p = new int;
    cube *c = new cube;

    *p = 12;
    (*c).setLength(12);

    cout << "*p = " << *p << endl;
    cout << "*c volume= " << (*c).getVolume() << endl;

    *p = 13;
    c->setLength(13);

    cout << "*p = " << *p << endl;
    cout << "*c volume= " << c->getVolume() << endl;

    delete c; c = nullptr;
    delete p; p = nullptr;

    return 0;
}
