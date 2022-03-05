/*
  PLACE DE CINEMA : By L'info Facile
  NB: ceci n'est qu'une propositiob de corrige car il y a plusieurs
  facons de resoudre ce genre d'exercice
*/
#include <stdio.h>
#define PRIX_POPCORN 5

int main(void)
{
  int montant_total,
      age,
      popcorn_choice;
  
  printf("Bonjour et bienvenu dans notre cinema \n");
  
  //recuperationde l'agede l'utilisateur
  printf(" > Quel age avez vous ? : ");
  scanf("%d", &age);
  
  // calcul du montant total du billet en fonctionde son age
  if(age >= 18)
    montant_total = 17;
  else
    montant_total = 5;
  
  // on demande ici si l'utilisateur veut du popcorn ou pas
  printf(" > Voullez vous du popcorn ? (1.oui | 2.non) : ");
  scanf("%d", &popcorn_choice);
  
  if(porcorn_choice == 1)
    montant_total += PRIX_POPCORN;
    
  // on affiche le montant total que ce dernier doit payer
  printf(" Vous payez au total : %d unites \n", montant_total);
  
  return 0;
}
