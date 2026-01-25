
    /**nyt_temp.cpp
    David Cochran
    Module 1
    Exercise #2 (arrays)
    Problem Statement: Given a data set of avergage temperatures for New York City, using a for loop and a while loop,
        compute the average, high, and low and show the month and average temp for that month.

    Steps:
    1. Define variables and Load the arrays
    2. Use for loop to determine the month of the highest temp
    3. output the results to the console
    4. Use a while loop to determine the month of the lowest temp
    5. Output the results to the console
    6. Use a do-while loop to determine the average temp for the year
    7. Output results to the console to 2 decimal places
    **/

    #include <iostream>
    #include <iomanip>

    using namespace std;

    int main(){

        int MONTHS = 12;
        struct temperature {string month; int temp;};
        int high_temp = 0;
        int low_temp = 0;
        float average_temp = 0;
        int i; 

        temperature temp_record[MONTHS] = {"January",38,"February",42, "March",50,"April",61,"May",72,
            "June", 79, "July",84,"August",83,"September",75,"October",64,"November",54,"December",43}; 
        

        for(i=0;i<MONTHS;i++){
            if(temp_record[i].temp>temp_record[high_temp].temp)
                high_temp = i;
        }
        i = 0;
        while (i < MONTHS){
            if(temp_record[i].temp<temp_record[low_temp].temp)
                low_temp = i;
            i++;
        }

        i=0;
        do {
            average_temp += temp_record[i].temp;
            i++;
        } while(i<MONTHS);
        
        average_temp /= MONTHS;

        cout << "The highest average temperature was " << temp_record[high_temp].temp << " in the month of " << temp_record[high_temp].month << endl;
        cout << "The lowest average temperature was " << temp_record[low_temp].temp << " in the month of " << temp_record[low_temp].month << endl;
        cout << "The average temperature for the entire year was " << fixed << setprecision(2) << average_temp << endl;
    }
 

