#include <stdio.h>
int main(){
    int n,count=1;
    scanf("%d",&n);
    int room[n],c[n];
    room[0]=1;
    for(int i=1;i<=n;i++){
        scanf("%d ",&room[i]); }
    for(int j=1;j<=n;j++){
        for(int i=0;i<=n;i++){
            c[j]=room[room[i]]; } }
    for(int k=2;k<=n;k++){
        if(c[1]==c[k]){
            count=k-1;
            printf("%d %d",count+1,count);
            break; } }
    return 0; }