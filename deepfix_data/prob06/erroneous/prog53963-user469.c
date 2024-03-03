#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,m,x,y,u,v,t=0,count=0;
    int a[100],b[100],c[100][2],p=0,q=0;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%d ",&b[i]); }
        for(i=0;i<n;i++) {
           u=a[i]-x;
           v=a[i]+y;
         for(j=t;j<m;j++) {
          if(b[j]<=v&&b[j]>=u)
          {   q=0;
           count++;
              c[p][q]=i+1;
              q++;
              c[p][q]=j+1;
              p++;
              j=j+1;
              break; } } }
    printf("%d\n",count);
    for(j=0;j<p,j++)
    printf("%d %d\n",c[j][0],c[j][1]);
	return 0; }