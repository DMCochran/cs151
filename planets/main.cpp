/**Planet Report.cpp
David Cochran
Module 1
Project #1 - Vector Sort
Problem Statement: Using a Planet class, store a vector of planets by their distance from the sun, and 
then print them out in a report alphabetically ordered.

Steps:
1. Create a vector of Planets ordered by distance from the sun
2. Print a report that looks like:
   Solar System Planets by Distance
  
   Planet     Diameter  Dist. to Sun  
  ----------  --------  ------------
  Mercury         4878      57900000
  Venus          12104     108200000
  Earth          12756     149600000
  Mars            6787     227900000
  Ceres            952     413700000

3. Print the sum of the diameters and distances as a row at the bottom of the report  

**/

#include "Planet.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

void insertPlanet(vector<Planet>& solarSystem, Planet newPlanet);

void generateReport(vector<Planet> solarSystem);

int main(){
    int totalDiameter = 0 ;
    long long totalDistance = 0 ;
    vector<Planet> solarSystem(1) ;

    //Create the planet objects
    Planet ceres("Ceres",952,413700000) ;
    Planet earth("Earth",12756,149600000) ;
    Planet eris("Eris",2321,10125000000) ;  
    Planet haumea("Haumea",1220,6452000000) ;  
    Planet jupiter("Jupiter",142796,778300000) ;  
    Planet makemake("Makemake",1475,6850000000) ;  
    Planet mars("Mars",6787,227900000) ;  
    Planet mercury("Mercury",4878,57900000) ;  
    Planet neptune("Neptune",48600,4497000000) ;  
    Planet pluto("Pluto",2302,5891000000) ;  
    Planet saturn("Saturn",120660,1427000000) ;  
    Planet uranus("Uranus",51118,2831000000) ;  
    Planet venus("Venus",12104,108200000) ;

    insertPlanet(solarSystem, ceres);
    insertPlanet(solarSystem, earth);
    insertPlanet(solarSystem, eris);
    insertPlanet(solarSystem, haumea);
    insertPlanet(solarSystem, jupiter);
    insertPlanet(solarSystem, makemake);
    insertPlanet(solarSystem, mars);
    insertPlanet(solarSystem, mercury);
    insertPlanet(solarSystem, neptune);
    insertPlanet(solarSystem, pluto);
    insertPlanet(solarSystem,saturn);
    insertPlanet(solarSystem, uranus);
    insertPlanet(solarSystem, venus);

    generateReport(solarSystem);
    return 0 ;
}

void insertPlanet(vector<Planet>& solarSystem, Planet newPlanet)

{
    //Insert planet by distance from the sun in ascending order
    vector<Planet>::iterator it = solarSystem.begin();
    Planet temp_planet = *it;
    bool inserted = false;
    while(it != solarSystem.end() && inserted == false)
    {
      temp_planet = *it;
      if(temp_planet.get_name()==""){
        solarSystem.insert(it, newPlanet);
        inserted = true;
      }
      
      if(newPlanet.get_distance() <= temp_planet.get_distance())
      {
        solarSystem.insert(it, newPlanet);
        inserted = true;
      }

      ++it;
    }

    if(inserted==false){
      solarSystem.push_back(newPlanet);
    }
};

void generateReport(vector<Planet> solarSystem){
    cout << "Solar System Planets by Distance" << endl << endl;
  
   Planet     Diameter  Dist. to Sun  
  ----------  --------  ------------
}