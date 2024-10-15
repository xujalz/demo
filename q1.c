#include<stdio.h>

int main(){

    printf("Name : Sujal Gupta \n");

    int a, b;

    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("");
    printf("Enter the value of B : ");
    scanf("%d", &b);

    if(a > b){
        printf("%d is Greater", a);
    }else{
        printf("%d is greater", b);
    }

return 0;
}