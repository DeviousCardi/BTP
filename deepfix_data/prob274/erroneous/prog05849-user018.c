#include <stdio.h>
int main(){
    int n,room[101],i,proom=1,t=0,flag=0,k,repeat=0,j,visit[1000];
    scanf("&d",&n);
    for(i=1;i<=n;i++){
        scanf("%d ",&room[i]); }
    i=1;
    visit[1]=1;
    while(repeat == 0){
        proom=room[proom];
        i++;
        visit[i]=proom;
        for(j=1;j<(i);j++){
            if(proom==visit[j]){
                flag=1;
                repeat=1;
                break; } }
        t++;
        printf("%d",proom);
        if(flag==1 || return){
            break; } }
    printf("%d",t);
    return 0; }