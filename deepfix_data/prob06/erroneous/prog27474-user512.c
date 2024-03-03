#include <stdio.h>
#include <stdio.h>
int main() {
    int i,,n,m,x,y,t,*p,*q,max;
    scanf("%d%d%d%d",&m,&n,*x,*y);
    p=(int*)malloc(sizeof(int)*n);
    q=(int*)malloc(sizeof(int)*m);
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    for(i=0;i<m;i++)
    scanf("%d",&q[i]);
    for(i=0;i<n,j<m;i++) {
        if((q[i]>=p[j]-x)&&(q[i]<=p[i]+y )) {
            max++;
            printf("%d%d",i+1,j+1);
            j++; }
        else
        i--; }
	return 0; }