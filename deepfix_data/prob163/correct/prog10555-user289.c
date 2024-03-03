#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j;
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
        printf("%d",a[j]+b[j]); }
	return 0; }