#include <stdio.h>
#include <string.h>


int main(){
    char str[20];
    printf("Enter a string;");
    gets(str);
    int l= strlen(str);
    for(int i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
}
    