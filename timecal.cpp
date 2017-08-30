// AUTHOR Hari Saran chhari@bu.edu
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    clock_t start_clock,end_clock;

    start_clock = clock();  // Timing starts here

    short unsigned int i = 1;

    while (i > 0)
    {
         i++;
    }

    end_clock = clock();    // Timing stops here
    double seconds = (double)(end_clock-start_clock) / CLOCKS_PER_SEC;
    double microseconds = 1000000*seconds;
    cout << "short unsigned int time(microseconds): " << microseconds << endl;

    clock_t start_clock2,end_clock2;

    start_clock2 = clock();  // Timing starts here

    unsigned int j = 1;

    while (j > 0)
    {
         j++;
    }
    end_clock2 = clock();    // Timing stops here
    double seconds2 = (double)(end_clock2-start_clock2) / CLOCKS_PER_SEC;
    cout << "unsigned int time (seconds): " << seconds2 <<endl;

    long seconds3 = seconds2*4294967296;
    long time = seconds3/3153600;
    cout << "long unsigned int(years): "<< time <<endl;
}
