#include<stdio.h>
int main()
{
   int a[100],b[100],n;

   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++)

   {
       b[i]=a[i];
   }

   for(int i=0;i<n;i++)
   {
      printf("%d\t",b[i]);
   }



}
