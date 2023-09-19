#include <stdio.h>
//Even Fibonacci Numbers - Project Euler Problem 2
main() {
   int s1=1,s2=2,s3,num, sum=0, n;
   printf("Introduza um inteiro: ");
   scanf("%d",&n);
   for (num=1;num<=n;num=s1)
   {
      s3=s2;
      s2+=s1;
      s1=s3;
      if ( num%2 == 0)
         sum += num;
   }
   printf("A soma é igual a: %d\n",sum);
   
   
}
