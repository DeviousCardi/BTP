#include <stdio.h>
int main(){
    int n=0,i=0,j=0,t;
    scanf("%d",&n);
    int roomexit[n],room[n];
    for(i=0;i<n;i++){
        scanf("%d",&roomexit[i]); }
    int rm;
    for(i=0;i<n;i=roomexit[i]-1){
        rm=roomexit[i];
        printf("%d ",rm);
        j++;
        if(j==5)
        break; }
    return 0; }