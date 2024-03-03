#include <stdio.h>
int x,y;
int max(int num1[x],int num2[y])
     {if(num1[x]<num2[y])
         return y;
     else
         return x; }
     int min(int num1[x],int num2[y])
    { if(num1[x]<num2[y])
         return x;
     else
         return y; }
int main() {
    int m,a,b,x,y;
    scanf("%d\n",&m);
     int num[m];
     a=max(num[x],num[y]);
     b=min(num[x],num[y]);
    b=a;
    for(int i=1;i<=m;i++){
        scanf("%d",&num[i]); }
      for(int j=1;j<=m;j++){
         printf("%2d",num[j]);
                  num[x]=num[y]; }
    printf(" end");
    return 0; }