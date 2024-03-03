#include <stdio.h>
int main(){
    int t,k,n,room[100],i,j,nxtroom[100],seq[100],count;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++) {
        scanf("%d ",&room[i]); }
    seq[0]=room[1];
    for(i=1;i<=n;i++) {
        seq[i]=room[room[i]]; }
    for(i=0;i<n;i++) {
        count=0;
        for(j=i+1;j<n;j++) {
            if(seq[i]==seq[j]) {
                k=j;
                t=i+j;
                break; }
            else {
                count=count+1; } }
        if(count!=0)
        continue; }
    printf("%d %d",&t,&k);
    return 0; }