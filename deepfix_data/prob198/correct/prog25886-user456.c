#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,y[n1],n2,z[n2],i,j,min=15,k;
    scanf("%d\n",&n1);
    for(i=0;i<n1;i++)
    scanf("%d\n",&y[i]);
    scanf("%d",&n2);
    for(j=0;j<n2;j++)
    scanf("\n%d",&z[j]);
    for(k=0;k<n1;k++) {
        if(y[k]<min)
        min=y[k]; }
    printf("%d",min);
	return 0; }