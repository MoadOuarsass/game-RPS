#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(NULL));
  int rslt,reponse;
  int i,score=0,gagner;
    printf("{bienvenue au jeux de Moad Ouarsass}\n");
    printf("combien de manche faut il gagner:\n");
    scanf("%d",&gagner);

    while(score<gagner)

    
{
   int alt = (rand() % 100);
   

  do {
    printf("entrer : \n 1 = sizo \n 2 = pierre \n 3 = feuille \n");
    scanf("%d",&reponse);
    switch (reponse)
    {
    case 1:
      printf("vous avez choisi sizo\n");
      break;
    case 2:
      printf("vous avez choisi pierre\n");
      break;
    case 3:
      printf("vous avez choisi feuille\n");
      break;
    
    default:
      break;
    }
  }
  while (reponse>3||reponse<1);
  


  if(alt<=34){
    rslt =1;
    printf ("IA a choisi sizo");
  }
  else if (alt>34 && alt<=66){
    rslt =2;
    printf("IA a choisi pierre");
  }
  else if (alt >66 && alt<=100){
    rslt =3 ;
    printf("IA a choisi feuille");
  }
  if (rslt == 1 && reponse == 2){
     printf(", [vous avez gagner]\n");
     printf("+1\n");
     score ++;
  }
  else if (rslt==1 && reponse==3){
     printf(", [vous avez echoue]\n");
     printf("-1\n");
     score --;
  }
  else if (rslt == 2 && reponse ==1){
     printf(", [vous avez echoue]\n");
     printf("-1\n");
     score --;
  }
  else if (rslt==2 && reponse==3){
     printf(", [vous avez gagner]\n");
     printf("+1\n");
     score ++;
  }
  else if (rslt==3 && reponse ==1){
     printf(", [vous avez gagnez]\n");
     printf("+1\n");
     score ++;
  }
  else if (rslt==3 && reponse==2){
     printf(", [vous avez echoue]\n");
     printf("-1\n");
     score --;
  }
  else{
     printf(", egalite\n");}
     printf("votre score est :%d \n",score);
    
}


  if (score>0)
  {
    printf("VOUS AVEZ GAGNER !");
  }
  else if (score<0)
  printf("VOUS AVEZ ECHOUE !");
  



 return 0;

}