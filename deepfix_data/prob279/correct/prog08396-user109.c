#include <stdio.h>
int main(){
    int n,temp,rn,mn;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++){
        a[i]=0; }
    for(int i=1;i<=n;i++){
        scanf("%d",&temp);
        a[temp]++; }
    for(int i=1;i<=n;i++){
        if(a[i]==2){
            rn=i; }
        if(a[i]==0){
            mn=i; } }
    printf("%d\n%d",rn,mn);
    return 0; }