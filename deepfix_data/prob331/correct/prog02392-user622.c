#include <stdio.h>
int main(){
 int n,count;
 int i,j,a,b;
 scanf("%d",&n);
    for(i=1;i<=n;i++)
    { scanf("%d",&a);
      count=0;
        for (j=1;j<=n;j++){
      scanf("%d",&b);
      if(((b==a)==1)&&((b!=a)==0)){count++;}
    }}
      if(count==n){printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
     else if(count!=n){printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }