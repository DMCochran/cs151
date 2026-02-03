#ifndef PLANET_H
#define PLANET_H

#include <string>

using namespace std;

class Planet{
    private:
        string name{};
        int diameter{};
        long long distance{};

    public:

        Planet();
        
        Planet(string name, int diameter, long long distance);

        string get_name();

        int get_diameter();

        long long get_distance();


};
#endif