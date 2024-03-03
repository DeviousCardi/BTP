#include <stdio.h>
#include <stdlib.h>
int main() {
    long m, n;
    int i, j, k = 0;
    long long x, y;
    long long *a, *b;
    int **c;
    scanf("%ld%ld%lld%lld", m, n, x, y);
    a = (long long *)malloc(sizeof(long long)*m);
    for(i=0; i<m; i++){
        scanf("%lld", *(a+i)); }
    b = (long long *)malloc(sizeof(long long)*n);
    for(i=0; i<n; i++){
        scanf("%lld", *(b+i)); }
    c = (int **)malloc(sizeof(int *)*);
    for(i=0; i<2; i++){
        c[i] = (int *)malloc(sizeof(int)*2); }
    for(i=0; i<m, i++){
        for(j=0; j<n; j++){
            if((a[i]-x)<=b[j]&&(a[i]+y)>=b[j]){
                c[i][0] = i;
                c[i][j] = j;
                k++;
                break; } } }
    printf("%d", k);
	return 0; }