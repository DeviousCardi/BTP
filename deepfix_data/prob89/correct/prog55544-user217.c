#include <stdio.h>
int main(){
    int k;
    int n;
    scanf("%d\n%d",&k,&n);
    int s[100];
    int y;
    int i;
    for(i=1;i<=n;i=i+1){
    for(y=1;y<=i;y=y+1){
        scanf("%d%d",&s[i],&s[i-y]);} }
        if(s[i]+s[i-y]==k){printf("lucky");}
        else{printf("unlucky");}
    return 0; }