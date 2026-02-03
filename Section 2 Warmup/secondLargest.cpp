#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int second_largest(int buffer[], int arr_size);

int main(){

     int numbers[9] = {43,7,56,9,70,32,64,-3,11};

     int arr_size = size(numbers);

     if(arr_size>0){
          int second_biggest = second_largest(numbers, arr_size);
          cout << "The second biggest number is " << second_biggest << endl;
     } else {
          int second_biggest = -1;
          cout << "The array is empty." << endl;
     }
     

     return 0;
}

int second_largest(int buffer[], int arr_size){
     
     int biggest = 0;
     int second_biggest = 0;

     if(arr_size > 0){
          for(int i=0;i<arr_size;i++){
               if(buffer[i]>=biggest){
                    biggest = buffer[i];
               }
               if(buffer[i]<biggest && buffer[i] >=second_biggest){
                    second_biggest = buffer[i];
               }
          }
     }    
     return second_biggest;
}