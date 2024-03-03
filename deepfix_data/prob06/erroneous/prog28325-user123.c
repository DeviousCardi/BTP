#include <stdio.h>
#include <stdlib.h>
int main() {
    float n, m, x, y;
	scanf("%f %f %f %f\n", &n, &m, &x, &y);
    int a[1000], b[1000], c[128][128];
    int ch, i, j;
    for(i=0;i<n;i++) {
        ch=getchar();
        a[i]=ch; }
    for(i=0;i<m;i++) {
        ch=getchar();
        b[i]=ch; }
    int k=0;
    int d=0;
    for(j=0;j<n;j++) {
        if(d<m) {
            if((a[j]-x>0&&(a[j]-x)==b[d])||((a[j]+y==b[d])) {
            c[k][0]=j;
            c[k][1]=d+1;
            k++;
            d++; } } }
    printf("%d\n", k);
    for(i=0;i<k;i++){
        for(j=0;j<2;j++)
        printf("%d ", c[i][j]);
        printf("\n"); }
	return 0; }