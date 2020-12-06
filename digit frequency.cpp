#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    
    int i;int l;int count[10]={0};
    char num[1001];
    scanf("%s",&num);
    l=strlen(num);
    for(i=0;i<l;i++)
    {
     switch(num[i]) 
       {
        case '1':
           {
           count[1]++;
           break;
           }
           
           
        case '2':
           
             {
           count[2]++;
             
           break;
           }
           
        case '3':
          
             {
           count[3]++;
             
           break;
           }
           
        case '4':
          
             {
           count[4]++;
             
           break;
           }
           
        case '5':
           
             {
           count[5]++;
             
           break;
           }
           
        case '6':
          
             {
           count[6]++;
             
           break;
           }
           
        case '7':
          
             { 
           count[7]++;
             
           break;
           }
           
        case '8':
           
              {
           count[8]++;
              
           break;
           }
           
        case '9':
          
              {
           count[9]++;
              
          break;
           }
           
        case '0':
           
             {
           count[0]++;
             
           break;
             }
           default:
           break;
           
          
       } 
    }
    for(i=0;i<10;i++)
        {
          printf("%d ",count[i]);
          
      }
      return 0;
}

