#include <stdio.h>

int main() {
   int isAdmin, accessLevel; 

   printf("Are you an admin? 1 for YES 0 for NO"); 
   scanf("%d", &isAdmin);

   if (isAdmin == 1) {
    printf("What is your access level?"); 
    scanf("%d", &accessLevel);
    if (accessLevel >= 5) {
        printf("Full system Control");
    } else if (accessLevel >= 1 && accessLevel <= 4) {
        printf("Restricted Admin Access");
    } else {
        printf("Admin Account Suspended");
    }
   } else {
        printf("Standard User Access Only");
   }
}

   
