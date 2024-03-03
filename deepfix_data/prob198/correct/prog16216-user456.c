#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,i,y[n1],n2,j,z[n2],k,m;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++)
	scanf("%d\n",&y[i]);
	scanf("%d\n",&n2);
	for(j=0;j<n2;j++)
	scanf("%d\n",&z[j]);
	int min=y[0];
	for(k=0;k<n1;k++) {
	    if (min>y[k])
	    min=y[k]; }
	if(min==z[0]||min==z[1]||min==z[2]||min==z[3])
	printf("NO");
	else printf("%d",min);
	return 0; }