#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("1- decemale vers binaire \n");
    printf("2- decemale vers octale \n");
    printf("3- decemale vers Hexadecemale \n");
    scanf("%d",&n);
      switch(n){
        case 1:
             do {
    		   a = i%2;
       		   i = i/2;
       		   printf("%d",a);
    		 }while(i>0);
            break;
            case 2:
                printf("entre le nombre : ");
                scanf("%d",&i);
                printf("le nombre %d en octale est : %o",i,i);
                break;
              case 3:
                printf("entre le nombre : ");
                scanf("%d",&i);
                printf("le nombre %d en Hexadecemale est : %x",i,i);
      }
    return 0;
}
