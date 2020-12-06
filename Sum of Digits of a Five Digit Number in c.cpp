#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
   int n;
    int sum=0;
    int digit=0;
    scanf("%d", &n);
   while(n>0)
   {
    digit=n%10;
    sum=sum+digit;
    n=n/10;
   }
   printf("%d",sum);
   return 0;
}

