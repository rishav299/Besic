#include<stdio.h>
void main()
{ int arr[5],i;
  printf("Enter the elements:");
  for(i=0;i<5;i++)
     { scanf("%d",&arr[i]);
     }
  printf("The Elelemnts in array are-");
   for(i=0;i<5;i++)
     { printf("%d,",arr[i]);
     }
   printf("\n");
}
