#include <stdio.h>
#include <stdlib.h>

int main()
{
  int bil;
  printf("Masukan Bilangan ? "); scanf("%d",&bil);
  if(bil>0)
  {
           if(bil%2 == 0)
           {
           printf("Bilangan Positif dan Genap \n");
           }
           else
           printf("Bilangan Positif dan Ganjil \n"); 
  }
  else if(bil<0);
  {
           if(bil%2 == 0)
           {
           printf("Bilangan Negatif dan Genap \n");
           }
           else
           printf("Bilangan Negatif dan Ganjil \n"); 
 }
  system("PAUSE");	
  return 0;
}

