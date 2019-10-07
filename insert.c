#include<stdio.h>
void main()
{ int arr[50],n,i,key,loc;
  printf("Enter the size of array b/w 1 to 50-");
  scanf("%d",&n);
  printf("Enter the %d elements in array:",n);
  for(i=0;i<n;i++)
    { scanf("%d",&arr[i]);
    }
  printf("Enter the elements to be insert:");
  scanf("%d",&key);
  printf("Enter the location to be insert elements:");
  scanf("%d",&loc);
  for(i=n-1;i>=loc;i--)
    { arr[i+1]=arr[i];
    }
   arr[loc]=key;
  printf("Array after insertion:");
  for(i=0;i<=n;i++)
   { printf("%d,",arr[i]);
   }
} 
