#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j,d,e,f,s;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[600];
	char c;
	c=getchar();
	for(i=0;i<n;i++) {
    a[i]=c;
	c=getchar(); }
    int b[600];
    char ch;
    ch=getchar();
    for(j=0;j<m;j++) {
    b[j]=ch;
    ch=getchar(); }
     for(j=0;j<n;j++) {
        s=a[n-j]+b[n-j];
        d=a[n-(j+1)]+b[n-(j+1)];
        e=s%10;
        f=d+e+f;}
        printf("%d",f);
	return 0; }