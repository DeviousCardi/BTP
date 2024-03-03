#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,m,n;
    scanf("%d%d",&m,&n);
    char c;
    int a[m],b[n],i=0;
    c=getchar();
    while(c!='\n') {
        a[i]=c-'0';
        i++;
        c=getchar(); }
   printf("%d",a[1]);
   return 0; }