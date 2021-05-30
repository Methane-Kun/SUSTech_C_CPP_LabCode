//lab2ex3.c
#include <stdio.h>

int main(){
    char a;
    printf("Please Enter a Character : ");
    scanf("%c",&a);
    int b;
    printf("Please Enter an Integer Value : ");
    scanf("%d",&b);
    float c;
    printf("Please Enter Float Value : ");
    scanf("%f",&c);

    printf("\nThe variables you entered were:\n");
    printf("The Character Value that you Entered is : %c\n",a);
    printf("The Integer Value that you Entered is : %d\n",b);
    printf("The Float Value that you Entered is : %.3f\n",c);
    return 0;
}