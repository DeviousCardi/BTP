#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j=0,*s,*v;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    s=(int*)malloc(n*sizeof (int));
    v=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&s[i]); }
    for (i=0;i<m;i++){
        scanf("%d",&v[i]); }
    int count =0;
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((s[i]-x)>v[j]) continue;
            if((s[i]+y)<v[j]) break;
            if((s[i]-x)<=v[j]&&s[i]+y>=v[j]) {
                count++;break; } }
    printf("%d",count);
	return 0; }