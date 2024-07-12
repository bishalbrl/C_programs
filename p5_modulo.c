// program to check where a number is divisible by 3 or not using modulo operator.

#include <stdio.h>
int main(){
    printf("welcome to the program to check if a number is divisble by 3 or not\n");
    printf("---------------------\n");
    int n;
    printf("Enter a number_");
    scanf("%d",&n);
    if(n % 3 == 0){
        printf("The number is divisible by 3.");
    }else{
        printf("The number is not divisible by 3.");
    }
    return 0;
}