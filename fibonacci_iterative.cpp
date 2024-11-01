#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

int main () {
    // Start measuring time
    time_t starting_time, ending_time;
    time(&starting_time);
    int user_input = 1;
    unsigned long long int first_number = 0, second_number = 1, next_term = 0;
    if (user_input == 0)
        {
            return 0;
        }
        if (user_input == 1)
        {
            return 1;
        }
    for (int i = 1; i <= user_input; ++i) {
        next_term = first_number + second_number;
        first_number = second_number;
        second_number = next_term;
        }
        cout<<next_term<< ", ";
      
    // Stop measuring time and calculate the elapsed time
    time(&ending_time);
    time_t execution_time = ending_time - starting_time;
    printf("\nExecution Time of Program: %ld seconds.\n", execution_time);
    return 0;
}