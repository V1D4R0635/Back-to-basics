#include <stdio.h>

int main(){
    float side1, side2, side3;

    printf("Enter first side: ");
    scanf("%f", &side1);
    printf("Enter second side: ");
    scanf("%f", &side2);
    printf("Enter third side: ");
    scanf("%f", &side3);

    if(side1 == side2 && side2 == side3){
        printf("This is an equilateral triangle");
    } else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("This is a isoceles triangle");
    } else {
        printf("This is a scalene triangle");
    }
    return 0;
}