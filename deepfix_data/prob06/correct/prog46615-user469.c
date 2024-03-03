#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,m,x,y,u,v,t=1;
    int a[100],b[100];
    scanf("%d %d %d %d",&n,&m,&x,&y);
    for(i=1;i<=n;i++) {
        scanf("%d ",&a[i]); }
    for(i=1;i<=m;i++) {
        scanf("%d ",&b[i]); }
    for(i=1;i<=n;i++)
    {   u=a[i]-x;
        v=a[i]+y;
        for(j=t;j<=m;j++) {
            if(b[j]<=v||b[j]>=u) {
                t=t+1;
              printf("%d %d\n",i,j); } } }
	return 0; }