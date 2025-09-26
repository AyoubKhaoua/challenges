#include<stdio.h>
#include<stdbool.h>
#include <string.h>


 typedef struct {
    char  cne[20];
    char  nom[40];
    char  prenom[40];
    float notes[4];   // 4 notes maximum
    float moyenne;    // calculée
} Etudiant;

Etudiant classe[30]; // max 30 étudiants

char  cne[20];
char  nom[40];
char  prenom[40];
float notes[4];   // 4 notes maximum
float moyenne;

int nbEtudiants = 0;





//poue ajouter un etudient 
void ajouterEtudiant(){
    if(nbEtudiants<30)
     {
        printf("entre un cin :");
        scanf("%s",&classe[nbEtudiants].cne);
        printf("entre un nom :");
        scanf("%s",&classe[nbEtudiants].nom);
        printf("entre un prenom :");
        scanf("%s",&classe[nbEtudiants].prenom);
        printf("entre quatre notes :");
        nbEtudiants++;
     }else{
        printf("la listes des etudients is full");
     }        
}
//poure saisier les notes pour chaque etudient 
void saisirNotes(){
    printf("dooner id de etudient lli bghit tzid lih note %d :", nbEtudiants);
    scanf("%s",cne);
    float note;
    for(int i=0;i<nbEtudiants;i++){
       
        if(strcmp(cne,classe[i].cne)==0){
            for(int j=0;j<4;j++){
                printf("donner la note %d :",j+1);
                scanf("%f",&note);
                classe[i].notes[j] = note;
                printf("%f\n",classe[i].notes[j]);
            }  
            break;  
        }
    }

         

}
//pour calculer la moyene de etudient
void calculerMoyenneEtudiant(){
     float somme=0;
      printf("3tini le etudient lli bghiti thsab lihnla moyene dyal notes dyalo:");
      scanf("%s",cne);
      for(int i=0;i<nbEtudiants;i++){
            if(strcmp(cne,classe[i].cne)==0){
               for(int j=0;j<4;j++){
                    somme+=classe[i].notes[j];
                }    
                classe[i].moyenne=somme/4;
                printf("%f\n",classe[i].moyenne);
            }  
      }

}
//pour calculer la moyene general
void calculerMoyenneGenerale(){
    float somme=0;
    float moyene_genral;
         for(int i=0;i<nbEtudiants;i++){
            somme+=classe[i].moyenne;
            
         }
         moyene_genral=somme/nbEtudiants;
         printf("la moyene general de toutes etudients est: %f\n",moyene_genral);
}
//pour affiche la liste des etudients
int afficherEtudiants(){
    for(int i=0;i<nbEtudiants;i++){
        printf("=====le tudient nemero %d est:\n",i+1);
        printf("le cin est:%s\n",classe[i].cne);
        printf("le nom est:%s\n",classe[i].nom);
        printf("le prenom est:%s\n",classe[i].prenom);
        printf("la moyene est:%f\n",classe[i].moyenne);
        for (int j= 0; j<4;j++)
        {
            printf("la note %d est:%.2f\n",j+1,classe[i].notes[j]);
        }
        
        
    }

}
//pour affiche  de Bulletin
void afficherBulletin(){
    float res;
    float bulletin;
    printf("donner un id de etudient pour affiche la bulletin: ");
    scanf("%s",cne);
    for(int i=0;i<nbEtudiants;i++){
            printf("le nom de etudient est :%s\n",classe[i].cne);
            printf("le nom de etudient est :%s\n",classe[i].nom);
            printf("le nom de etudient est :%s\n",classe[i].prenom);
            for (int j=0;j<4;j++)
            {
               printf("les notes :%f/",classe[i].notes[j]);
               res+=classe[i].notes[j];
            }
         printf("%f",res/4) ;  
         calculerMoyenneGenerale();

    } 
     
}




int main(){
   

int nbr;
do
{


    printf("pour Ajouter un etudiant tapez 1 :\n");
    printf("pour Saisir les notes d un etudiant tapez 2 :\n");
    printf("pour calculer la moyene par utlisateur donne 3 :\n");
    printf("pour calculer moyene general 4 :\n");
    printf("pour affiches les etudients  5 :\n");
    printf("pour affiches les Bulletins 6 :\n");
    printf("pour quette le programme 0 :\n");
    printf("entre ur choix:");
    scanf("%d",&nbr);

    switch (nbr)
             {
             case 1:
                  ajouterEtudiant();
                 
                 break;
            case 2:
                  saisirNotes();
                  break;
            case 3:
                  calculerMoyenneEtudiant();
                  break;
            case 4:
                  calculerMoyenneGenerale();
                  break; 
            case 5:
                 afficherEtudiants();
                  break;
            case 6:
                  afficherBulletin();
                  break;                 
             
             default:
                 break;
             }



    
} while (nbr!=0);




    return 0;

}