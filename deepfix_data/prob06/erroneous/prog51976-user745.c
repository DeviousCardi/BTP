#include <stdio.h>
#include <stdlib.h>
long int *a;
long int *b;
long int **d;
int main() {
	long int n, m, x, y;
	scanf("%ld %ld\n%ld %ld", &n, &m, &x, &y);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*m);
    d=(int**)malloc(sizeof(int*)*n);
    for(i=0; i<2; i++)
    d[i]=(int*)malloc(sizeof(int)*i);
    int i, j;
    long int k=0;
    for(i=k; i<m; i++){
        for(j=0; j<n; j++){
            if(a[j]-x<=b[i]&&b[i]<=a[j]+y){
                if(a[j]!=-1){
                    d[k][0]=j+1;
                    d[k][1]=i+1;
                    k++;
                    a[j]=-1; } } } }
    printf("%d\n",count);
    for(i=0;i<k;i++){
            printf("%ld %ld\n", **(d+i), *(*(d+i)+1)); }
	return 0; }