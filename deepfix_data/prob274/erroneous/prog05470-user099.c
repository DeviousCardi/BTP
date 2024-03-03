#include <stdio.h>
int main(){
    int t,k,n,flag=0;
    scanf("%d\n",&n);
    int exit[n],visit[n];
    for(int i=0;i<n;i++) scanf("%d",&exit[i]);
    visit[0]=1;
    for(j=1;j<n;j++) {
        visit[j]=exit[j-1];
        for(int l=t-1;l>=0;l--) {
            if(visit[j]=visit[l]) {
                t=j;
                k=j-l+1;
                flag=1;
                break } }
        if(flag=1) break; }
    printf("%d %d",t,k);
    return 0; }