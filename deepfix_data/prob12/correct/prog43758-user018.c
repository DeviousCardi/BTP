#include <stdio.h>
int main(){
    int n,i,j,mindis,dis,list[400];
    scanf("%d",&n);
    for(i=0;i<(2*n);i++)
    mindis=(2*n)-1;
    for(i=0;i<n;i++){
        for(j=n;j<(2*n);j++){
            if(list[i]==list[j]){
                dis=j-i;
                if(dis<mindis){
                    mindis=dis; }
                break; } } }
    printf("%d",mindis);
    return 0; }