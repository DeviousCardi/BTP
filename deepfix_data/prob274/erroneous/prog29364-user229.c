#include <stdio.h>
int main(){
    int n,i,j,t,k,count=0,x;
    int room[100];
    scanf("%d",&n);
    for(i=0;i<n;i++);
    {x=0
        scanf("%d",&room[i]);
        for(j=0;j<i;j++){
            if(room[j]==room[i])
            {t=i+2; break;} }
        for(j=0;j<i;j++){
            if(room[j]==room[i]) x=x+1; }
        if(x==0) count=count+1; }
    k=count-1;
    printf("%d %d",t,k);
    return 0; }