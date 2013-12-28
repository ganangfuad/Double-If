#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("Add Mark : "); scanf("%d",&mark);
    if((mark >=80) && (mark<=100))
    {
              printf("Indeks A \n");
              printf("Cumlaude \n");
    }
    else if((mark >=60) && (mark<=79))
    {
              printf("Indeks B \n");
              printf("Great \n");
    }
    else if((mark >=40) && (mark<=59))
    {
              printf("Indeks C \n");
              printf("Good \n");
    }
    else if((mark >=20) && (mark<=39))
    {
              printf("Indeks D \n");
              printf("No Way \n");
    }
    else if((mark >=0) && (mark<=19))
    {
              printf("Indeks E \n");
              printf("Bad \n");
    }
    else  if(mark >100)
    printf("No Way Man \n");
              
    
  
  system("PAUSE");	
  return 0;
}
