#include <stdio.h>
#include <ctype.h>

int main() {
 char vehicleType;
 int speed, fine, extraFine; 


 printf("What is your vehicle type? C for CAR M for MOTORCYCLE T for TRUCK");
 scanf(" %c", &vehicleType);

 vehicleType = toupper(vehicleType);

 printf("What was your speed?");
 scanf("%d", &speed);

switch (vehicleType)
{
case 'C':
    if (speed <= 60){ 
        fine = 0;
        printf("You have no fine!");
    } else if (speed > 60) {
        if (speed == 60) {
            fine = 100; 
            printf("Your fine is %d", fine);
        } else {
        speed -= 60;
        extraFine = speed * 10;
        fine = 100 + extraFine; 
        printf("Your fine is %d", fine);
        }
    }
    break;
case 'M': 
 if (speed <= 50) {
    fine = 0;
    printf("You have no fine!");
 } else if (speed > 50) {
    fine = 50;
    printf("Your fine is %d", fine);
 }
break;
case 'T': 
 if (speed <= 40) {
    fine = 0;
    printf("You have no fine!");
 } else if (speed > 40) {
    fine = 200;
    printf("Your fine is %d", fine);
 }
 break;
default: printf("Unknown Vehicle Type");
    break;
}
}

   
