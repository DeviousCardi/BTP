#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y;
    scanf("%d %d %d %d", &n, &m, &x, &y);
    int i,j,k=0,*a,*b,*u,*v;
    a = (int*)malloc(n*sizeof(int));
    b = (int*)malloc(m*sizeof(int));
    u = (int*)malloc(n*sizeof(int));
    v = (int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++) {
        scanf("%d", a+i); }
    for(i=0;i<m;i++) {
        scanf("%d", b+i); }
    i=0,j=0;
    while(i!=n && j!=m)) {
        if(a[i]-x<=b[j] && b[j]<=a[i]+y) {
            u[k]=i+1;
            v[k]=j+1;
            k++; }
        i++;
        j++; }
    printf("%d\n", k);
	for(i=0;i<k;i++) {
	    printf("%d %d\n", *(u+i),*(v+i)); }
	return 0; }