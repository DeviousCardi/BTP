#include <stdio.h>
int main(){
    int n,i,j,t,k,flag=0,c;
    scanf("%d",&n);
    int a[n+1];
    a[0]=1;
    for(i=1;i<n+1;i++){
        scanf("%d ",&a[i]); }
    int room[n];
    room[0]=1;
    for(i=1;i<n+1;i++){
        c=room[i-1];
        room[i]=a[c];
        for(j=0;j<i;j++){
            if(room[j]==room[i]){
                t=i;
                k=i-j;
                flag=1;
                break; } }
        if(flag==1){
            break; } }
    printf("%d %d",t,k);
    return 0; }