#include <stdio.h>
#include <stdlib.h>
#include<string.h>

    struct contact {


     char nom[100];
     char email[100];
     int Numero;

    };
int main(){

        struct contact c;
        int count=0;
    int n,contact=0;
    printf("\n\n\t\t\t**Système de Gestion de Contacts**\n\n");
    printf("\n\t1_ajouter votre les information.\n");
    printf("\n\t2_modifier votre information.\n");
    printf("\n\t3_sopprim une information.\n");
    printf("\n\t4_affiche votre information.\n");
    printf("\n\t5_rechercher votre information.\n\t");


       do{
         printf("\n\n\tchoisi un numero :\t");
          scanf("%d" ,&n);

       switch (n){

       case 1:{

        printf("\n__Nentre votre nom\t:");
        scanf("%s",c.nom );

        printf("\n__Entrer  lvotre email\t: ");
        scanf("%s",c.email);

        printf("\n__Entrer Numero de telephone\t:" );
        scanf("%d",&c.Numero );

          if(contact <100){
              printf("\t\t***contactajoute avec succus.*** \n");
              contact++;
              break;
        }
        else {
        printf("\n\n****Stock plein !!!.****\n");

         }break;
       }
       case 2:{

       char nome[50];
                printf("\nEntre le nom de conte poure modifier :\t ");
                   scanf("%s" ,nome);

       if(strcmp(c.nom,nome)==0){

                    printf("\n__Entre le nouvelle nom\t:");
                        scanf("%s",c.nom);
                    printf("\n__Entre le nouvelle email\t:");
                        scanf("%s",c.email);
                    printf("\nNentre le nouvelle numero\t:");
                        scanf("%d",c.Numero);

                printf("\n\n\t***Contact modifié avec succès.***\n  ");

                }break;
       }
       //
       case 3:{

       char nom[100];

           printf("entrer le compte que tu veux supprimer :");
                scanf("%s", nom);

           if(strcmp(c.nom,nom)==0){
                printf("\n\n*****compte suprime avec succes !***** ");
                contact--;
            }

        else {
            printf ("\n\t\t####le cont non trouver####\n");
        }
    break;
    }

        case 4:{

            if (contact == 0) {
        printf("Aucun contact à afficher.\n");


    } else  {

        printf("contact est : %d \n",contact);
        printf("\nvotrenome\t:%s\n",c.nom);
        printf("\nvotre email\t:%s\n",c.email);
        printf("\nvotre numero \t:%d\n",c.Numero);
    }
    break;
        }

        case 5:{

         char recherche[100];
            printf("\nentrer le nom de compt a recherche \t:");
            scanf("%s" ,recherche);
            if(strcmp(recherche,c.nom)==0){
                printf("\n\t\t####existe####");

            }else{
                printf("contact nom trouve.");
            }
        break;
        }
        default:{
                printf("Fin de programme ");
           break;
       }
       }
       }while(n<=5);

}
