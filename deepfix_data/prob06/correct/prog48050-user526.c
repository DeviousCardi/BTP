#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,*a,i,*b,k=0,j,c,d,e=100;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b=(int *)malloc(m*sizeof(int));
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(j=0;j<m;j++) {
        c=b[j]-x;
        d=b[j]+y;
        for(i=0;i<n;i++) {
            if((a[i]>=c)&&((a[i]<=d))) {
                a[i]=e;
                b[j]=e;
                k++;
                e++;
                break; } } }
    printf("%d\n",k);
    for(j=0;j<m;j++) {
        for(i=0;i<n;i++) {
            if(a[i]==b[j])
            printf("%d %d\n",j+1,i+1); } }
	return 0; }