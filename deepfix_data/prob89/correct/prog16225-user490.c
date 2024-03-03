#include <stdio.h>
int main(){
    int k,n;
    scanf("%d",&k);
    scanf("%d",&n);
    int s[n];
    int i;
    for(i=0;i<=n;i=i+1){
        scanf("%d",&s[n]); }
    int a,b;
    for(a=0;a<=n;a=a+1){
        for(b=0;b<=n;b=b+1){
            if(s[a]+s[b]==k){
                printf("lucky"); }
            else { printf("unlucky");}
            break; }
        break; }
    return 0; }