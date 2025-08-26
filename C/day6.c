 #include <stdio.h>

 int main(){
    int choice;
    float weight, conv;

    printf("1. Kilograms to pounds\n2. Pounds to kilograms\nEnter choice: ");
    scanf("%d", &choice);
    
    if(choice == 1){
      printf("Enter the weight in kilograms: ");
      scanf("%f", &weight);
      conv = weight * 2.20462;
      printf("%.2f kg = %.2f lbs", weight, conv);
    } else if (choice == 2)
    {
      printf("Enter the weight in pounds: ");
      scanf("%f", &weight);
      conv = weight * 0.4535922;
      printf("%.2f lbs = %.2f kg", weight, conv);
    }
    
    
    return 0;
    
 }