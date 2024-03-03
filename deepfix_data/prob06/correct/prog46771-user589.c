#include <stdio.h>
#include <stdlib.h>
int main() {
    long long m, n;
    int i, j, k = 0;
    long long x, y;
    long long *a, *b;
    int **c;
    scanf("%lld%lld%lld%lld", &m, &n, &x, &y);
    a = (long long *)malloc(sizeof(long long)*m);
    for(i=0; i<m; i++){
        scanf("%lld",&a[i]); }
    b = (long long *)malloc(sizeof(long long)*n);
    for(i=0; i<n; i++){
        scanf("%lld", &b[i]); }
    c = (int **)malloc(sizeof(int *)*m);
    for(i=0; i<2; i++){
        c[i] = (int *)malloc(sizeof(int)*2); }
    int p = 0;
    for(i=0; i<m; i++){
        for(j=p; j<n; j++){
            if((a[i]-x)<=b[j]&&(a[i]+y)>=b[j]){
                c[i][0] = i+1;
                c[i][1] = j+1;
                k++;
                p = j;
                break; } } }
    printf("%d", k);
	return 0; }