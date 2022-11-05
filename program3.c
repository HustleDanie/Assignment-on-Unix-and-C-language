// Write a C program to print numbers from 1 to N
#include <stdio.h>

int main(){

    int num, count=1;
    //the user inputs the number to count down 
    printf("Enter a positive number: \n");
    scanf("%d",&num);
    // this counts the loop to the required number inputed by the user
    
    while (count<=num){
        printf("%d",count);
        count++;
    }
}