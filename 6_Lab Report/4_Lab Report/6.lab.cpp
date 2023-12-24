/*6. Write a program with overloaded constructors that will pass three arguments to the parameters.*/
#include <iostream>
using namespace std;

class GeoMap
{
    double longitude;
    double latitude;
    double amplifier;

public:
    GeoMap()
    {
        longitude = 0;
        latitude = 0;
        amplifier = 5.5;
    }
    GeoMap(double lo, double la, double a)
    {
        longitude = lo;
        latitude = la;
        amplifier = a;
    }
    double math()
    {
        return GeoMap::amplifier * abs(longitude - latitude);
    }
};

int main()
{

    GeoMap g1, g2(2.4, 4, 7.3);
    cout<< g1.math() << endl;
    cout<< g2.math() << endl;
    return 0;
}