#include<stdio.h>
int main()
{
    int a[100][400],b[500][500],row,col;
    printf("how many row and cols you want=");
    scanf("%d%d",&row,&col);
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<col;j++)
      {
          printf("a[%d][%d]= ",i,j);
          scanf("%d",&a[i][j]);
      }

printf("\n");


    }
printf("a");
for(int i=0;i<row;i++)
    {
     for(int j=0;j<col;j++)
      {

          printf("  %d\t",a[i][j]);

      }

printf("\n");

    }
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<col;j++)
      {
          printf("b[%d][%d]= ",i,j);
          scanf("%d",&b[i][j]);
      }

printf("\n");


    }
printf("B=");
for(int i=0;i<row;i++)
    {
     for(int j=0;j<col;j++)
      {

          printf("  %d\t",b[i][j]);

      }

printf("\n");

    }













}
