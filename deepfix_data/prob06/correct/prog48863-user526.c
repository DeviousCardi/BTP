#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,*a,i,*b,k=0,j,c,d,**e;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b=(int *)malloc(m*sizeof(int));
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    e=(int **)malloc(m*sizeof(int *));
    for(i=0;i<m;i++)
    e[i]=0;
    for(j=0;j<m;j++) {
        c=b[j]-x;
        d=b[j]+y;
        for(i=0;i<n;i++) {
            if((a[i]>=c)&&((a[i]<=d))) {
                *(*e)=i+1;
                *(*e+1)=j+1;
                k++;
                e++;
                break; } } }
    for(i=0;i<n;i++)
    printf("*%d*",a[i]);
    printf("%d\n",k);
	return 0; }