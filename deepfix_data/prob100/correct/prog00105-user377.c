#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,max[1000], num,ans;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++) {
        scanf("%d",&max[i]);
        for(int j=0;j<n-1;j++) {
            scanf("%d",&num);
            if(num>max[i])
            max[i]=num; } }
        ans=max[0];
        for(int i=0;i<m;i++) {
            if(max[i]<ans)
            ans=max[i]; }
        printf("%d",ans);
    return 0; }