#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i;
    scanf("%d",&n);
    scanf("%d\n",&m);
    char c[n],d[m];
    for(i=0;i<n;i++)
    scanf("%c",&c[i]);
    getchar();
    for(i=0;i<m;i++)
    scanf("%c",&d[i]);
    for(i=0;i<n;i++)
    printf("%c",c[i]);
    for(i=0;i<m;i++)
    printf("%c",d[i]);
	return 0; }