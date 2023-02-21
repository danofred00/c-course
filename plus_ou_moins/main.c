

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define POSIBILITIES 10

void init_generator() {
    srand(time(NULL));
}

int generate_integer(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

void greatting() {
    puts("--------------------------");
    puts("Bienvenu chers utilisateur");
    puts("--------------------------");
}

int menu() {
    int choice = 0;
    puts("Menu du jeu");
    puts("1. Jouer une partie");
    puts("2. Quitter");
    printf("[choix]> (entrer juste le numero) : ");
    scanf("%d", &choice);

    return choice;
}



void run() {
    
    int replay = 0;
    char c;

    int win = 0;
    ///int posibilities = POSIBILITIES;
    int user_choice = 0;
    int generated_number = generate_integer(0, 100);

    do { 
        printf("Entrez un nombre (0-100): ");
        scanf("%d", &user_choice);

        if(user_choice > generated_number) {
            puts("Nombre plus petit");
            //posibilities--;
            //printf("Tentative Restantes : %d \n", posibilities);
        } else if(user_choice < generated_number) {
            puts("Nombre plus grand");
            //posibilities--;
            //printf("Tentative Restantes : %d \n", posibilities);
        } else {
            puts("Bravo, vous avez gagner !!!");
            win = 1;
        }

    } while(win == 0);

    fflush(stdin);
    printf("Voulez-vous rejouer : (y | n)");
    scanf("%c", &c);

    if(c == 'Y' || c == 'y')
        replay = 1;
    else 
        replay = 0;

    if(replay == 1) {
        run();
    }

}


void play() {

    int choice = 0;

    choice = menu();

MENU_CHECK:
    switch(choice) {
        case 1:
            puts("Chargement de a partie ...");
            run();
            break;
        case 2:
            puts("Merci d'avoir joue a notre jeu");
            exit(EXIT_SUCCESS);
            break;
        default:
            puts("Choix incorrect! Veuillez recommencer");
            choice = menu();
            goto MENU_CHECK;
            break;
    }

    play();

}


int main() {

    init_generator();
    greatting();
    play();

    return 0;
}