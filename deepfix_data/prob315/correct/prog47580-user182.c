#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,m,s=0,k,a[1000];
    scanf("%d",&m);
    for(i=0;i<m;i++) {
        scanf("%c",&a[i]); }
    for(i=0;i<m;i++)
    {  k=0;
        k=k+1;
        for(j=1;j>i,j<m;j++) {
            if ( a[i]>a[j])
            s=s+1; } }
    printf("%d\n",s);
	return 0; }