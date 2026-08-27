#include <stdio.h>
#include <string.h>

int romanToInt(char* s) {
    // I   V   X    L   C   D   M 
    // 1   5   10   50 100 500 1000

    // exceptions: 
    /*
        I can be placed before V (5) and X (10) to make 4 and 9. 
        X can be placed before L (50) and C (100) to make 40 and 90. 
        C can be placed before D (500) and M (1000) to make 400 and 900.
    */

    int sum = 0; 

    // iterate through the string
    for (int i = 0; i < strlen(s); i++) {

        // update sum based on letter
        char numeral = s[i];
        if (numeral == 'I') {
            sum += 1;
        }
        else if (numeral == 'V') {
            sum += 5;
        }
        else if (numeral == 'X') {
            sum += 10;
        }
        else if (numeral == 'L') {
            sum += 50;
        }
        else if (numeral == 'C') {
            sum += 100;
        }
        else if (numeral == 'D') {
            sum += 500;
        }
        else if (numeral == 'M') {
            sum += 1000;
        }
    }   

    printf("%d\n", sum); 
}

int main(void) {
    romanToInt("XXVII");
    return 0;
}