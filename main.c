//
//  main.c
// TASK 1
//
//  Created by Edvinas Bukanas on 2019-02-04.
//  Copyright © 2019 Edvinas Bukanas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Global variables

char clothes[50];
int menu=45;

// Function 1 - Do the laundry

char doLaundry(char clothes[50]);

char doLaundry(char clothes[50]) {
    // Instructions
    printf("You will clean your %s.\n", clothes);
    printf("* Take your %s to the washing machine.\n", clothes);
    printf("* Insert the %s into the washing machine.\n", clothes);
    printf("* Pour detergent into the tray\n");
    printf("* Pour softener into the tray\n");
    printf("* Choose your washing mode\n");
    printf("* Press START\n");
    
    // Assumptions
    printf("\nAssumptions:\n\n");
    printf("1. You have clothes to wash.\n");
    printf("2. You have detergent and softener.\n");
    printf("3. You have a washing machine.\n");
    printf("4. You have electricity to run the washing machine.\n");
    printf("5. You are physically capable of completing the tasks.\n");
    
    
    // Returning back to the menu
    printf("\nPress 0 to exit to main menu\n");
    printf(":");
    scanf("%d", &menu);
    if (menu==0) {
        main();
    }
    
    return 0;
};

// Function 2 - Ride a bike

int rideBike(int distance);

int rideBike(int distance) {
    
    printf("\nYou will ride your bike for %dkm\n", distance);
    // Instructions
    printf("* Find the bike.\n");
    printf("* Get on it.\n");
    printf("* Place your feet on the pedals.\n");
    printf("* Balance yourself out.\n");
    printf("* Start pedaling.\n");
    printf("* Continue for %dkm.\n\n", distance);
    
    // Assumptions
    printf("Assumptions:\n\n");
    printf("1. This isn't your first time riding a bike.\n");
    printf("2. You have a bike.\n");
    printf("3. You can manage to cycle for %dkm.\n", distance);
    printf("4. You are physically capable of completing the tasks.\n");
    
    // Returning to the main menu
    printf("\nPress 0 to exit to main menu\n");
    printf(":");
    scanf("%d", &menu);
    if (menu==0) {
        main();
    }
    return 0;
};

// Function 3 - Make Chicken Bacon Broccoli Alfredo

int chickenAlfredo(int portions);

int chickenAlfredo(int portions) {
    // Instructions
    printf("You chose to make %d portions of Chicken Bacon Broccoli Alfredo.\n", portions);
    printf("* Heat oil in a pot over medium-high heat.\n");
    printf("* Cool the chicken with salt and pepper.\n");
    printf("* Add garlic and broccoli, cooking for 1-2 minutes.\n");
    printf("* Add 500ml of milk, parmesan, parsley and bacon until the milk boils.\n");
    printf("* Add 270g of spaghetti and stir evenly..\n");
    if (portions <= 1) {
    printf("* Prepare %d plate\n", portions);
    printf("* Eat it or give the plate away ");
    } else {
    printf("* Prepare %d plates\n", portions);
    printf("* Distribute the %d plates", portions);
    }
    
    // Assumptions
    printf("\n\nAssumptions:\n\n");
    printf("1. You have people in your life to feed.\n");
    printf("2. You have the required ingredients.\n");
    printf("3. You have enough plates.\n");
    printf("4. You are physically capable of completing the tasks.\n");

    // Returning to main menu
    printf("\nPress 0 to exit to main menu\n");
    printf(":");
    scanf("%d", &menu);
    if (menu==0) {
        main();
    }
    return 0;
}

int main() {
    
    int vote = 0;
    char input[50];
    int input1 = 0;
    int input2 = 0;
    char opt;
    
    printf("\nPlease choose one of the following tasks\n");
  
    printf("1. Do the laundry\n");
    printf("2. Ride a bike\n");
    printf("3. Make Chicken Bacon Broccoli Alfredo\n\n");
    printf("Your choise: ");
    scanf("%d", &vote);

    switch (vote) {
        case 1:
            printf("What are you going to wash?\n\n");
            scanf("%s", &input);
            doLaundry(input);
            return 0;
            break;
        case 2:
            printf("\nHow far do you plan on riding? (km)\n");
            printf(": ");
            scanf("%d", &input1);
            rideBike(input1);
            break;
        case 3:
            printf("How many portions are you making?\n");
            printf(": ");
            scanf("%d", &input2);
            chickenAlfredo(input2);
            break;
        default:
            printf("\nError: wrong choise.\n");
            printf("Would you like to try again? [Y/N] \n");
            printf(":");
            scanf(" %c", &opt);
            if (opt == 'y' || opt == 'Y') {
            main();
            }else{
            break;
    }

    return 0;
}
}
