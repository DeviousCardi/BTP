#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,*a,i,*b,k=0,j,c,d;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b=(int *)malloc(m*sizeof(int));
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(j=0;j<m;j++) {
        c=b[i]-x;
        d=b[j]+y;
        for(i=0;i<n;i++) {
            if((c>=a[i])&&(d<=a[i])) {
                a[i]=j;
                k++;
                break; } } }
    printf("%d",k);
	return 0; }