#include <stdio.h>
int main() {
    int m,a,b,c,d;
    scanf("%d\n",&m);
     int num[m];
     int max(int c,int d);
     if(c<d){
         return d; }
     else{
         return c; }
     int min(int c,int d);
     if(c<d){
         return c; }
     else{
         return d; }
     a=max(num[m],num[m]);
     b=min(num[m],num[m]);
    b=a;
    for(int i=1;i<=m;i++){
        scanf("%d",&num[i]); }
      for(int j=1;j<=m;j++){
         printf("%d",num[j]); }
    printf("end");
    return 0; }