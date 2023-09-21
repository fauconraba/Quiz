#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char nom[100];
    int choix,note=0;


 printf("\n\n\n___________ Quiz __________\n\n");

printf(" \nsaisier votr nom:");
scanf("%s",nom);
printf("p");
sleep(1);
printf("r");
sleep(1);
printf("e");
sleep(1);
printf("t");
sleep(1);
printf("s");
sleep(1);
printf("?");




printf("\n   ALORS %s testez vous conaissances sur la culture marocaine!\n \n",nom);
printf("___________________________________________\n");

    printf("               Question:1\n");
sleep(1);

printf("          Quelle est la capitale du Maroc ?\n");
 printf("          1-Bejaad  2-Marrakech 3-Rabat \n");
 scanf("%d",&choix);
 if(choix==3){
    printf("    Bonne reponse.\n");
    note=note+1;
 }
 else {
    printf("  Mauvaise repononse,la Bonne reponse est:Rabat\n");
 }
printf("_________________________________________________________\n");
 printf("                    Question:2\n");
 sleep(1);
 printf("          Quelle est la langue officielle du Maroc ?\n");

 printf("            1- DARIJA 2-Francais 3-Amazighia\n");
 scanf("%d",&choix);
 if(choix==1)
{
    printf("Bonne reponse.\n");
    note=note+1;
}
else{
    printf("Mauvaise reponse, la bonne reponse est: Darija\n");
}
printf("_________________________________________________________\n");
 printf("                   Question:3\n");
 sleep(1);
 printf("          Qui etait le roi du Maroc en 2021 ?\n");

 printf("          1- Hassan II 2-Mohamed VI 3-Hassan III \n");
 scanf("%d",&choix);
 if(choix==2)
{
    printf("Bonne reponse.\n");
    note=note+1;
}
else{
    printf("Mauvaise reponse, la bonne reponse est: Mohamed VI\n");
}
printf("________________________________________________________\n");
 printf("                   Question:4\n");
 sleep(1);
 printf("         Quelle est la monnaie utilisee au Maroc ?\n");

 printf("            1- Dirham  2-Dollar 3-Euro\n");
 scanf("%d",&choix);
 if(choix==1)
{
    printf("Bonne reponse.\n");
    note=note+1;
}
else{
    printf("Mauvaise reponse, la bonne reponse est: Dirham\n");

}

printf("_______________________________________________________________________\n");
 printf("                           Question:5\n");
 sleep(1);
 printf("         Quelle est la signification du terme 'kasbah' au Maroc  ?\n");

 printf("              1- forteresse  2-Marrakech 3-sahara\n");
 scanf("%d",&choix);
 if(choix==1)
{
    printf("Bonne reponse.\n");
    note=note+1;
}
else{
    printf("Mauvaise reponse, la bonne reponse est: forteresse\n");

}
printf("______________________________________________________________\n");
 printf("                        Question:6\n");
 sleep(1);
 printf("         Quelle est la boisson traditionnelle au Maroc  ?\n");

 printf("          1- the'atay'  2-ice coffe 3-lit au chocolat\n");
 scanf("%d",&choix);
 if(choix==1)
{
    printf("Bonne reponse.\n");
    note=note+1;
}
else{
    printf("Mauvaise reponse, la bonne reponse est: the'atay'\n");

}



printf(" felicitations %s vous avez termine le quiz votre score est:%d/6",nom,note);



printf(" \n\n\n____________________________________  _________       \n\n\n   ");
printf("ce programme est realise par Haytam Raba");
printf(" \n\n\n____________________________________  _________       \n\n\n   ");





    return 0;
}
