#include <string.h>
#include <stdio.h>
#define INPUT_MAX 100

int print_menu() {
    printf("\nMENU\n\n1.\tGet a user's info\n2.\tEnter a user's info\n3.\tFind out who is the best programmer\n4.\tSave and Quit\n\n");
    
    return 0;
}

int enter_data() {
    
    
    return 0;
}

int main() {

    FILE *fptr;
    char userInput[INPUT_MAX];

    print_menu();
    fgets(userInput, INPUT_MAX, stdin);
    userInput[strcspn(userInput, "\n")] = '\0';

   do {
    print_menu();

    fgets(userInput, INPUT_MAX, stdin);
    userInput[strcspn(userInput, "\n")] = '\0';

   if (strcmp(userInput, "1") == 0) {
    //TODO
   }
   else if (strcmp(userInput, "2") == 0) {
    //TODO
    enter_data();
   }
   else if (strcmp(userInput, "3") == 0) {
    //TODO
   }
   else {
    //TODO
    printf("Invalid input, please try again...\n");
   }

   } while(strcmp(userInput,"4") != 0);

    return 0;
}

