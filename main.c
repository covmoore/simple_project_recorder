#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define INPUT_MAX 100
#define ALL_USERS_FILE "all_users.txt"

char* CREATE_TEXTS[] = { \
    "\nProject name: ", \
    "\nProject description (max 100 chars): ", \
    "\nDoes this project have a repo? (Y/N):", \
    "\nEnter the repo url: ", \
    "\nIs this project completed or in progress?\n(\"0\" for complete & \"1\" for in progress): " \
};

int userCount = 0;


int create_new_user(char name[]) {
    FILE *fptr;
    char userInput[INPUT_MAX];
    printf("Creating new user file...\n");

    char fileExt[] = ".txt";

    char fileName[INPUT_MAX + sizeof(fileExt)] = "";

    //strcpy(fileName, name);

    // for (int i = 0; i < strlen(fileExt); i++) {
    //     fileName[strlen(name)+i-1] = fileExt[i]; 
    //

    strcat(fileName, "user_data/");
    strcat(fileName, name);
    strcat(fileName, ".txt");

    //printf("File Name: %s", fileName);

    fptr = fopen(fileName, "w");

    for (int i = 0; i < 5; i++) {
        printf("%s", CREATE_TEXTS[i]);
    }
    // printf("\nProject Name: ");
    // fgets(userInput, INPUT_MAX, stdin);
    // strcat(userInput, ",");
    // fprintf(fptr, userInput);

    // printf("\nProject Description (max 100 chars): ");
    // fgets(userInput, INPUT_MAX, stdin);
    // strcat(fptr, userInput);
    // fprintf(fptr, userInput);

    // printf("\nDoes this project have a repo? (Y/N):");



    fclose(fptr);
    return 0;

}

int remove_new_line(char* input) {
    (input)[strcspn((input), "\n")] = '\0';

    return 0;
}

int print_menu() {
    printf("\nMENU\n\n1.\tGet a user's info\n2.\tEnter a user's info\n3.\tFind out who is the best programmer\n4.\tSave and Quit\n\n");
    
    return 0;
}

int enter_data(char **allUsers) {
    FILE *fptr;
    if(userCount == 0) {
        printf("There are no current users.\nType a name to enter new user's data...\n");
    }
    else {
        printf("Current Users...\n");
        for(int i = 0; i < userCount; i++) {
            printf("%s\n", allUsers[i]);
        }
        printf("Type the name of an existing user to edit their data \n");
        printf("or type a new name to enter a new user's data");
    }
    printf("Or type \"exit\" to exit the program...\n");

    char userInput[INPUT_MAX];


    do{
        fgets(userInput, INPUT_MAX, stdin);
        remove_new_line(userInput);
        //printf("user input: %s%s\n", userInput, "line");

        for(int i = 0; i < userCount; i++) {
            if(strcmp(allUsers[i], userInput) == 0) {
                //edit_existing_user(userInput);
                return 0;
            }
        }

        create_new_user(userInput);

    } while(strcmp(userInput, "exit") == 0);


    return 0;
}

int get_all_users(char ***allUsers) {
    FILE *fptr;
    fptr = fopen("user_data/all_users.txt", "r");
    if(fptr == NULL) {
        printf("File \"%s\" does not exist\n", "all_users.txt");
        return 1;
    }
    char line[INPUT_MAX];
    char lineNumber = 0;
    while(fgets(line, INPUT_MAX, fptr)) {
        if(line == NULL || line == EOF) {
            return 1;
        }
        if(lineNumber == 0) {
            userCount = atoi(line);
            (*allUsers) = (char**)malloc(userCount * sizeof(char*));
            if((*allUsers) == NULL) {
                printf(stderr, "Memory allocation failed\n");
                return 1;
            }
            lineNumber++;
            continue;
        }
        line[strcspn(line, "\n")] = '\0';
        (*allUsers)[lineNumber-1] = (char*)malloc((strlen(line)+1) * sizeof(char));
        strcpy((*allUsers)[lineNumber-1], line);
        lineNumber++;
    }
    fclose(fptr);
    return 0;
}

int main() {
    FILE *fptr;
    char userInput[INPUT_MAX];
    char **allUsers = NULL;

    get_all_users(&allUsers);

   do {
    print_menu();

    fgets(userInput, INPUT_MAX, stdin);
    userInput[strcspn(userInput, "\n")] = '\0';

   if (strcmp(userInput, "1") == 0) {
    //TODO
   }
   else if (strcmp(userInput, "2") == 0) {
    enter_data(allUsers);
   }
   else if (strcmp(userInput, "3") == 0) {
    //TODO
   }
   else if (strcmp(userInput, "4") == 0) {
    printf("quitting...\n");
   }
   else {
    //TODO
    printf("Invalid input, please try again...\n");
   }

   } while(strcmp(userInput,"4") != 0);

    return 0;
}

