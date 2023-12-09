#include <iostream>
using namespace std;

int main() {
    double price = 99.99;
    float interest = 3.67F; // <- F or f is required to correctly delcare a float variable
    long file_size = 90000L; // <- L or l is required to correctly delcare a long variable
    char name = 'gage';
    bool isValid = false;
    return 0;
}


// DATA TYPES
/*
type    bytes   range
bool    1       true/false   
char    1       1 character
string  inf     array of chars
*/

// INT DATA TYPES 
/*
type    bytes   range               usage
short   2       -32768 to 32767     takes less storage so use when you need num within range
int     4       -2B to 2B           any whole number between the range. might not need if number is within short range
long    4       -2B to 2B
long long 8     insane range        if you need huuuuuuuuge numbers for complex math
*/

// DOUBLE(FLOAT) DATA TYPES
/*
type    bytes   range                 usage
float   4       -3.2E38 to 3.2E38     takes less storage so use when you need num within range
double  8       -1.7E308 to 1.7E308   any decimal number between the range. might not need if number is within float range
long double  8  -3.4E932  to 3.4E932
*/




