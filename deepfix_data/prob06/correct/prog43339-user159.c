#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,k=0;
    int i,j,*a,*b;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<m;j++)
    scanf("%d",&b[j]);
    for(i=0,j=0;i<n && j<m;)
     if(b[j]>=a[i]-x  && b[j]<=a[i]+y) { k++; j++;i++; }
     else i++;
    printf("%d",k);
	return 0; }