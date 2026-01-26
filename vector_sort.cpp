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
    #include<iterator>


   using namespace std;

    const int VECTOR_SIZE = 30;

    int main(){
        vector<int> numbers(VECTOR_SIZE);
        vector<int>::iterator it;
        int new_num;
        bool inserted=false;

        //Use current time as random seed
        srand(time(0));

        for(it = numbers.begin(); it != numbers.end(); ++it){
            //Generate a random number between 0 and 9
            new_num = rand()%10;
            

            while( it <= numbers.end() && inserted==false){
                
                
                if(*it <= new_num){
                    if(it==numbers.end()){
                        numbers.push_back(new_num);
                    }
                    else {
                        it=numbers.insert(it,new_num);
                    }
                    inserted = true;
                }

            }

            //The number was higher than all the numbers in the vector
            if(inserted==false){
                numbers.push_back(new_num);
                inserted = true;
            }
            //reset the flag for the next loop
            inserted=false;
        }

        //Print out the vector in reverse order
        for(it=numbers.begin();it<numbers.end();it++)
        {
            cout << *it << endl;
        }
        return 0;
    }