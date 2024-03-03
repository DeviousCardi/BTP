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
    int m,a,b,z,x,y;
    scanf("%d\n",&m);
     int num[m];
     a=max(num[x],num[y]);
     b=min(num[x],num[y]);
    num[a]=z;
    num[b]=num[a];
    num[b]=z;
    for(int i=1;i<=m;i++){
        scanf("%d",&num[i]); }
      for(int j=1;j<=m;j++){
         printf(" %d",num[j]); }
    printf(" end");
    return 0; }