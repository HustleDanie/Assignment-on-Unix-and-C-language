#include <stdio.h>
#include <math.h> // this is the library to be able to calculate the roots

// create  variable to store values 
int main(){
    float x,y,z;
    float root1,root2;
    float root_part,denom;

// create an input for the users to input the coefficients 
    printf("Enter Values of x,y,z\n");
    scanf("%f%f%f",&x,&y,&z);

// to calculate the root of the quadratic equation
    root_part= sqrt(y*y-4*x*z);
    denom=2*x;

// this will solve the quadratic equation 
    root1=(-y+root_part)/denom;
    root2=(-y-root_part)/denom;

//this will print the root of the equation
    printf("root1=%f\nroot2=%f",root1,root2);

    return 0;

}