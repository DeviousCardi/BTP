#include <stdio.h>
#include <stdlib.h>
void read(long int*arr,long int size) {
    int i;
    for(i=0;i<size;i++)
        scanf("%ld",arr+i); }
int main() {
    int i,j,count=0,k;
    long int *a,*b,n,m,x,y;
    scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
    a=(long int*)malloc(sizeof(long int)*n);
    b=(long int*)malloc(sizeof(long int)*m);
    read(a,n);
    read(b,m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++) {
            if(a[i]-x<=b[j]&&b[j]<=a[i]+y) {
                printf("%d %d\n",i,j);
                count++;
                break; } }
        k=count;
	return 0; }