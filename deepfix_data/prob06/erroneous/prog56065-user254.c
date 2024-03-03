#include <stdio.h>
#include <stdlib.h>
int main() {
    int nop=0, nov=0, i=0, j=0, start=0, count=0;
    long int x=0, y=0, *vests=NULL, *solds=NULL;
    scanf("%d", &nop);
    scanf("%d", &nov);
    scanf("%ld", &x);
    scanf("%ld", &y);
    vests=(long int*)malloc(nov*sizeof(long int));
    solds=(long int*)malloc(nop*sizeof(long int));
    for(i=0;i<nov;i++)
    scanf("%ld", (vests+i));
    for(i=0;i<nop;i++)
    scanf("%ld", (solds+i));
    int *dtls=(int*)malloc(2*sizeof(int));
    while(i<nop) {
        for(j=start;j<nov;j++) {
            if(vests[j]>=solds[i]+y) } }
	free(vests);
	free(solds);
	return 0; }