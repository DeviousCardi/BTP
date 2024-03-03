#include <stdio.h>
int main(){
     int m,i,j,count;
     i=0 ;
    scanf("%d",&m);
    int a[m];
    count=0 ;
     for(i=0;i<=m;i++)
    {for(j=0;j<=m;j++) {
         a[j]=i ;
         printf("%d",a[j]) }
    printf("end");
    return 0; }