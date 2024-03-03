#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int i,j,a,c;
    c=0;
    scanf("%d", &a);
    for(i=1;i<=n;i++)
     {for(j=1;j<=n;j++)
      { scanf("%d",&a);
        if (i==j) {
          if (a==1) {
              c=1; }
          else
             {c=0;
              break;} }
        else
         {if (a==0)
           {c=0;}
         else
             {c=0;}
             break; } } }
    if(c==1)
     {printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
    else
     {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
    return 0; }