#include <iostream>
#include <limits>
#include "fence.h"
using namespace std;

Fence::Fence (int length)
{
    /*
    2*a + b = length
    area = a*b
    area = length*a - 2*a^2
    p = (-length)/(-2*2)  this is extremum of the vertex of the parabola
    */
    a = length/4;
    b = length-2*a ;
    area = a*b;
    c = (length/4)+1;
    d = length-2*c ;
    area2 = c*d;

}

Fence::~Fence()
{
    cout<<"Object is being deleted";

}

void Fence::show()
{
    if (area == area2)
    {
        cout << "In this case we have 2 solutions:" << endl;
        cout<<"a="<<a<<"  b="<<b<<" max area="<<area<<endl;
        cout<<"a="<<c<<"  b="<<d<<" max area="<<area2<<endl;
    }
    else if (area > area2)
    {
        cout<<"a="<<a<<"  b="<<b<<" max area="<<area<<endl;
    }
    else
    {
        cout<<"a="<<c<<"  b="<<d<<" max area="<<area2<<endl;
    }
}
