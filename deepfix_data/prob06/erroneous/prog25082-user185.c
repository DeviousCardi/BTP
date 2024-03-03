#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,p,q,x,y,s[20],v[20],i,j,ans[10][1],k=0;
    scanf("%d%d%d%d ",&n,&m,&x,&y);
    scanf("\n");
    for(i=0;i<n;i++) {
        scanf("%d ",&s[i]); }
    for(j=0;j<m;j++) {
        scanf("%d",&v[j]); }
    for(j=0;j<m;j++) {
        for(i=0;i<n;i++) {
         if(s[i]==-20){continue;}
         else if(s[i]-x<=v[j]&&s[i]+y>=v[j]) {
                ans[k][0]=i+1;
                ans[k][1]=j+1;
                s[i]=-20;
                v[j]=100
                k++; }
            else{ continue;} } }
    printf("%d\n",k);
    for(p=0;p<k;p++) {
        for(q=0;q<2;q++) {
            printf("%d ",ans[p][q]); }
        printf("\n"); }
	return 0; }