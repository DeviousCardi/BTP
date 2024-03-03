#include <stdio.h>
int main(){
    int n,k;int i;int flag=0;int x;
    scanf("%d%d",&k,&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&x);
        num[i]=x; }
    for(i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(num[i]+num[j]==k){
                flag=1; }
        for(int j=(i+1);j<n;j++){
            if(num[i]+num[j]==k){
                flag=1; } }
    }}
    if(flag==1){
        printf("lucky"); }
    else{
        printf("unlucky"); }
    return 0; }