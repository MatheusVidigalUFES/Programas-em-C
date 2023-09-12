#include <stdio.h>
//Problema: Multiplos de 3 e de 5
main()
{
   int num,i,j=0;
   printf("Introduza um inteiro: ");
   scanf("%d",&num);
   for(i=1;i<num;i++) 
       if (i%3 == 0 || i%5==0)
          j+=i;
printf("%d",j);
}
