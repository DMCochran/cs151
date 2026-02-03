#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int my_func();

int main(){
     int my_arr[6] = {1,2,3,4,5,6};

     int n = size(my_arr);

     cout << n << endl;

     return 0;
}

int my_func(int an_arr[6]){
     return size(an_arr);
}