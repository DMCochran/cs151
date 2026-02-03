#include "Planet.h"
#include <string>

using namespace std;

class Planet{
    private:
        string name;
        int diameter;
        long long distance;

    public:
        Planet(){

        }
        
        Planet(string name, int diameter, long long distance)
        {
            this->name = name;
            this->diameter = diameter;
            this->distance = distance;
        }

        string get_name()
        {
            return name;
        }
        int get_diameter()
        {
            return diameter;
        }

        long long get_distance()
        {
            return distance;
        }
};