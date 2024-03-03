#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,*a,*b,**c,i,j=0,k=0,f=0;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    c=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    c[i]=(int*)malloc(2*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<m;i++) {
        while(j++<=n&&f==0) {
            if(b[i]>=a[j]-x&&b[i]<=a[j]+y) {
                c[k][0]=j+1;
                c[k][1]=i+1;
                k++;
                f=1; } }
        f=0; }
    printf("%d\n",k);
    for(i=0;i<k;i++)
    printf("%d %d\n",c[i][0],c[i][1]);
	return 0; }