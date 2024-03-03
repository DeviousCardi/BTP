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
    int m,a,b,z;
    scanf("%d\n",&m);
     int num[m];
         for(int i=0;i<m;i++){
        scanf("%d",&num[i]); }
     for(x=0;x<m;x++){
      for (y=0;y<m;y++){
     a=max(num[x],num[y]);
     b=min(num[x],num[y]); } }
      z=num[a];
      num[a]=num[b];
      num[b]=z;
      for(int j=0;j<m;j++){
         printf(" %d",num[j]); }
    printf(" end");
    return 0; }