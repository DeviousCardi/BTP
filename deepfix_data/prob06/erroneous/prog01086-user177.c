#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,*a,*b,**c,i=0,k=0;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    c=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    c[j]=(int*)malloc(2*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[m]);
    for(i=0;i<m;i++) {
        while(j<n) {
            j++
            if(b[i]>=a[j]-x&&b[i]<=a[j]+y) {
                c[k][0]=j;
                c[k][1]=i;
                k++;
                break; } }
        if(j==n-1)
        break; }
    printf("%d'\n'",k);
    for(i=0;i<n;i++)
    printf("%d %d'\n'",c[i][0],c[i][1]);
	return 0; }