    /**nyt_temp.cpp
    David Cochran
    Module 1
    Project #1 - Vector Sort
    Problem Statement: Create a vector of 30 random integers from 1 to 10

    Steps:
    1. Gerenate Random Number
    2. Insert into vector in descending order
    **/

    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <vector>


   using namespace std;

    const int VECTOR_SIZE = 30;

    int main(){
        vector<int> numbers(VECTOR_SIZE);
        vector<int>::iterator itr;
        int new_num;
        bool inserted=false;

        //Use current time as random seed
        srand(time(0));

        for(itr = numbers.begin(); itr != numbers.end(); ++itr){
            //Generate a random number between 0 and 9
            new_num = rand()%10;
            
            while(int j=0 < numbers.size() && inserted==false){
                if(numbers[j+1]<= new_num){
                    if(j==numbers.size()){
                        numbers.push_back(new_num);
                    }
                    else {
                        numbers.insert(itr+j,new_num);
                    }
                    inserted = true;
                }
                j++;
            }

            //The number was higher than all the numbers in the vector
            if(inserted==false){
                numbers.push_back(new_num);
                inserted = true;
            }
        }

        //Print out the vector in reverse order
        for(int i=0;i<numbers.size();i++)
        {
            cout << numbers[i] << endl;
        }
        return 0;
    }