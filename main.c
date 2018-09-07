/* This program hel the user to knoe the value of Pi depends the digit of he/she want
 *
 * Autor: Karla Alexandra Hernandez Aviles
 * fecha: 06/09/2018
 * Correo: A01411843@itesm.mx
 * */

#include <stdio.h>
//need add another library for the math functions
#include <math.h>

int main() {
    // declaration of variables
    int n;   // num. of digits
    double pi = 0;

    printf("Welcome, I will help you. How many decimals of Pi would you like to know?\n");
    scanf("%i", &n);

    // loop starts, repeating itself n number of times
    for(int k = 0; k <= n; k++) {
        pi += (pow(16.0,-k)) * ((4.0 /((8 * k)+ 1)) - (2.0 /((8 * k)+ 4)) - (1.0 /((8 * k)+ 5))
                - (1.0 /((8 * k)+ 6)));
    }
    // the program displays the total number.
    printf("The value of pi at %i = %.*f\n", n, n, pi);




    return 0;
}
