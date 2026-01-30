/**Vector Sort.cpp
David Cochran
Module 1
Project #1 - Vector Sort
Problem Statement: Create a vector of 30 random integers from 0 to 9. Store them in reverse numeric order
and print them in numeric order.

Steps:
1. Gerenate Random Number
2. Insert into vector in descending order
    a. Create an iterator for the vector
    b. If the number is lower than the current number and higher or equal to the next number insert it
    c. If the iterator is at the end of the vector (it==vector.end()), push_back the number
3. Reverse print the values in the vector so that they are ascending
**/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iterator>

using namespace std;

const int VECTOR_SIZE = 30;

int main()
{
    vector<int> numbers(1); //Set size to one to initialize it
    vector<int>::iterator it;
    int new_num;
    bool inserted = false; 

    // Use current time as random seed
    srand(time(0));

    //A for loop to control generating 30 numbers
    for(int i=0;i<VECTOR_SIZE;i++){
        //Initialize iterator
        it = numbers.begin();
        //Set our inserted flag
        inserted = false;
        //Generate a random number from 0 to 9
                    //Generate a random number
        new_num = rand()%10;
        while(inserted==false){

            //Push_back first number otherwise numbers.begin and end are unusable
            //Find insertion point and have iterator pointing there

            //Insert if we are at insert point or push_back if at end
            if(new_num>=*it){
                numbers.insert(it,new_num);
                inserted = true;
            }
            if(it==numbers.end()){
                numbers.push_back(new_num);
                inserted=true;
            }
            ++it;
        }
    }

    // Print out the vector in reverse order
    for (auto it = numbers.begin(); it < numbers.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}