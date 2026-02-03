#ifndef PLANET_H
#define PLANET_H

#include <string>

class Planet{
    private:
        std::string name;
        int diameter;
        long long distance;

    public:

        Planet();

        Planet(std::string name, int diameter, long long distance);

        std::string get_name();

        int get_diameter();

        long long get_distance();


};
#endif