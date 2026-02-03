#include "Planet.h"
#include <string>

using namespace std;

Planet::Planet(){}

Planet::Planet(string name, int diameter, long long distance)
{
    this->name = name;
    this->diameter = diameter;
    this->distance = distance;
}

string Planet::get_name()
{
    return name;
}
int Planet::get_diameter()
{
    return diameter;
}

long long Planet::get_distance()
{
    return distance;
}
