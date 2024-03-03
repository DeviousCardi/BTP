#include <stdio.h>
#include <stdlib.h>
int cha(int n) {
    if(n==48)
    return 0;
    if(n==49)
    return 1;
    if(n==50)
    return 2;
    if(n==51)
    return 3;
    if(n==52)
    return 4;
    if(n==53)
    return 5;
    if(n==54)
    return 6;
    if(n==55)
    return 7;
    if(n==56)
    return 8;
    if(n==57)
    return 9; }
int main() {
    int n,m,i,x=0,d;
    scanf("%d\n",&n);
    scanf("%d\n",&m);
    int a[n],b[m],e[m+n];
    for(i=0;i<n;i++)
    a[i]=getchar();
    for(i=0;i<m;i++)
    b[i]=getchar();
    for(i=0;i<n;i++)
    a[i]=cha(a[i]);
    for(i=0;i<m;i++)
    b[i]=cha(b[i]);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
	return 0; }