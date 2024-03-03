#include <stdio.h>
#include <stdlib.h>
void spa(int a)
{int i=0;
for(;i<a;i++)
printf(" ");}
int main() {
int n,i,j,a=0;
scanf("%d",&n);
for(i=1;i<=n;i=i+1){
    if(i==1 || i==n){
        spa(n/2);
        printf("*"); }
printf("\n");
      if (!(i==1 || i==n)){
      for(j=1;j<=2;j=j+1){
          if(j==1)
          {spa(n/2);
          printf("*");}
          else
         {spa(n/2-a);
         printf("*");
      }}
      printf("\n"); } }
	return 0; }