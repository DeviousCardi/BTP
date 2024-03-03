#include <stdio.h>
#include <stdlib.h>
int main() {
    long int i,j,n,m,x,y;
    scanf ("%ld%ld%ld%ld",&n,&m,&x,&y);
    long int *a,*b;
    a=(long int*)malloc(n*sizeof(long int));
    b=(long int*)malloc(m*sizeof(long int));
    for (i=0;i<n;i++) {
        scanf ("%ld",a+i); }
    for (i=0;i<m;i++) {
        scanf ("%ld",b+i); }
    int k=0;
    for (i=0;i<n;i++) {
        for (j=k;j<m;j++) {
            if (*(a+i)-x<=*(b+j)&&*(b+j)<=*(a+i)+y) {
                k++;break; } } }
    printf ("%d\n",k);
    k=0;
    for (i=0;i<n;i++) {
        for (j=k;j<m;j++) {
            if (*(a+i)-x<=*(b+j)&&*(b+j)<=*(a+i)+y) {
                k++;
                printf ("%ld",i+1);
                printf ("%ld\n",j+1);
                break; } } }
	return 0; }