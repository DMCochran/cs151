    #include <iostream>
    #include <cstdlib>
    #include <ctime>

    using namespace std;

    int main(){
        int new_num;
        srand(time(0));
        
        for(int i=0;i<100;i++){
            new_num = rand()%10;
            cout << i << ":" << new_num << endl;
        }
    }
