/**nyt_temp.cpp
David Cochran
Module 1
Project #1 - Vector Sort
Problem Statement: Create a vector of 30 random integers from 1 to 10

Steps:
1. Gerenate Random Number
2. Insert into vector in descending order
3. Reverse print the values in the vector so that they are ascending
**/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iterator>
// Extension 'Prettier - Code formatter' is configured as formatter but it cannot format 'C++'-files

using namespace std;

const int VECTOR_SIZE = 30;

int main()
{
    vector<int> numbers;
    vector<int>::iterator it = numbers.begin();
    int new_num;
    bool inserted = false;

    // Use current time as random seed
    srand(time(0));

    // While we arent at the end of the vector and we havent inserted yet
    // It fails when the number is between two numbers. For example when it is 3 and the higher
    // number is 7 and the lower is 2
    while (it <= numbers.end() && inserted == false)
    {
        // Is it smaller than the current index
        if (*it >= new_num)
        {
            //Insert in place or put it at the end
            if (it == numbers.end())
            {
                numbers.push_back(new_num);
            }
            else
            {
                it = numbers.insert(it, new_num);
            }
            // Change our flag
            inserted = true;
        }
        it++;

        // The number was higher than all the numbers in the vector
        if (inserted == false)
        {
            numbers.push_back(new_num);
            inserted = true;
        }
        // reset the flag for the next loop
        inserted = false;
        // Reset the iterator since it is no longer valid
        it = numbers.begin();
    }

    // Print out the vector in reverse order
    for (auto it = numbers.begin(); it < numbers.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}