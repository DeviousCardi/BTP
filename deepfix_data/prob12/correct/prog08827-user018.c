#include <stdio.h>
int main(){
    int n,i,j,mindis=399,dis,list[400];
    scanf("%d",&n);
    for(i=0;i<(2*n);i++){
        scanf("%d ",&list[i]); }
    for(i=0;i<n;i++){
        for(j=n;j<(2*n);j++){
            if(list[i]==list[j]){
                dis=j-i;
                if(dis<mindis){
                    mindis=dis;
                    break; }
                break; } } }
    printf("%d",mindis);
    return 0; }