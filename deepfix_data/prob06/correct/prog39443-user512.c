#include <stdio.h>
#include <stdio.h>
#include<stdlib.h>
int main() {
    int i,n,m,x,y,j=0,*p,*q,*u,*v,k=0,max=0;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    p=(int*)malloc(sizeof(int)*n);
    q=(int*)malloc(sizeof(int)*m);
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    for(i=0;i<m;i++)
    scanf("%d",&q[i]);
    u=(int*)malloc(sizeof(int)*n);
    v=(int*)malloc(sizeof(int)*m);
    for(i=0;i<n && j<m;i++) {
        if((q[i]>=p[j]-x)&&(q[i]<=p[i]+y )) {
            max++;
            u[k]=i+1;
            v[k++]=j+1;
            j++; }
        else
        i--; }
    printf("%d",max);
    for(i=0;i<k;i++) {
        printf("\n%d %d",u[i],v[i]); }
	return 0; }