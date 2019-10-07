#include<stdio.h>
void main()
{ int arr[100],n,i,sum=0;
  printf("Enter the size of arary between 1 to 100-");
  scanf("%d",&n);
  printf("Enter the elements in array:");
  for(i=0;i<n;i++)
   { scanf("%d",&arr[i]);
   }
  for(i=0;i<n;i++)
   { sum=sum+arr[i];
   }
  printf("sum:%d\n",sum);
}
