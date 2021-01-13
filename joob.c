#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	 struct president {
	 	char name [127];
	 	int vote;
	 };
	 
int main(int argc, char *argv[]) {
	int nbPre, nbElc;
		printf("SVP saisir le nombre du condidats dans cette ellection presenditelle : ");
		scanf("%d",&nbPre);
			struct president condidat[nbPre];
				//remplissage du president 
		for (int i=0;i<nbPre;i++)
			{
				printf("SVP veulliez saisir le nom du condidats : %d",i+1);
				printf("\t");
				scanf("%s",&condidat[i].name);
			}
			printf("SVP veuillez saisir le nombre du electeurs dans cette election : ");
			scanf("%d",&nbElc);
			//remplissage
				char electeurs[nbElc][127];
			for (int i=0;i<nbElc;i++)
			{
			
				printf("Svp veuillez saisir votre CIN : ");
					scanf("%s",electeurs[i]);	
			}
				//vote
			    int votes,i;
    
    for(i=0;i<nbPre; i++);
        {
        condidat[i].vote=0;
    }
    
    			//affichage
				system("cls");
		for(int i = 0; i<nbPre;i++)
			{
				printf("le condidat numero : %d est : %s\n",i+1,condidat[i]);
			}
    for(i=0; i<nbElc; i++){
    printf("\nElecteur %d CIN(%s), entrer le nombre de president vous voulez voter pour: ", i+1, electeurs[i]);
    scanf("%d", &votes);
    condidat[i].vote+1;
}
    for(i=0; i<nbPre; i++)
      {
       printf("Le president %s a eu %d votes.\n ", condidat[i],condidat[i].vote);
    }			
			return 0;	
}