#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,m,n;
    scanf("%d%d",&m,&n);
    char c,c1;
    int a[m],b[n],i=0;
    scanf("%c%c",&c,&c1);
    while(c1!='\n') {
        a[i]=(int)c1-(int)'0';
        i++;
        c1=getchar(); }
   printf("%d",a[0]);
   return 0; }