#include <stdio.h>
#include <stdlib.h>
void read(long int*arr,long int size) {
    int i;
    for(i=0;i<size;i++)
       { scanf("%ld",arr+i);
       printf("%ld",*(arr+i));} }
int main() {
    long int *a,*b,n,m,x,y;
    scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
    a=(long int*)malloc(sizeof(long int)*n);
    b=(long int*)malloc(sizeof(long int)*m);
    read(a,n);
    read(b,m);
	return 0; }