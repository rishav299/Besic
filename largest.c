#include<stdio.h>
void main()
{ int arr[100],n,i,large;
  printf("Enter the size of arary between 1 to 100-");
  scanf("%d",&n);
  printf("Enter the elements in array:");
  for(i=0;i<n;i++)
   { scanf("%d",&arr[i]);
   }
 large=arr[0];
 
 for(i=1;i<n;i++)
  { if(arr[i]>large)
     { large=arr[i];
     }
  }
 printf("Largest is=%d",large);
}
