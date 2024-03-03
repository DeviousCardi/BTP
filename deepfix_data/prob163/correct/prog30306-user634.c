#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,m,n;
    scanf("%d%d",&m,&n);
    char c,c1;
    int a[m],b[n],i=0;
    scanf("%c%c",&c,&c1);
    while(c1!='\n'&&m>=0) {
        a[i]=(int)c1-(int)'0';
        i++;m--;
        c1=getchar(); }
    i=0;
    c=getchar();
    while(n>=0) {
        b[i]=c-'0';
        i++;
        c=getchar(); }
    for(i=0;i<=m;i++)
        printf("%d",a[i]);
    return 0; }