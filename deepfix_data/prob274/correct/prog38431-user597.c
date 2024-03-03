#include <stdio.h>
int main(){
    int n,i,j,t,k;
    int ext[100];
    int roomc[100];
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ext[i]); }
    roomc[0]=1;
    if(ext[1]==1){
        printf("1 1");
        return 0; }
    for(i=1;i<100;i++){
        roomc[i]=ext[roomc[i-1]];
        for(j=1;j<i;j++){
            if(roomc[i]==roomc[j]){
                t=i;
                k=i-j;
                printf ("%d %d",t,k);
                return 0; } } }
    return 0; }