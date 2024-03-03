#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[100]={3,5,34,7},d[100],i,j,m;
	m=a[0];
    for(j=0;j<4;j++) {
        for(i=0;i<4;i++) {
            if(a[i]<m) m=a[i]; }
        d[j]=m;
        printf("%d",d[j]); }
	return 0; }