#include <stdio.h>
int main(){
    int n,k;int i;int flag;int x;
    scanf("%d%d",&k,&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&x);
        num[i]=x; }
    for(i=0;i<n;i++){
        for(int j=(i+1);j<n;j++){
            if(num[i]+num[j]==k){
                flag=1; }
            else{flag=0;} }
        for(int j=0;j<i;j++){
            if(num[i]+num[j]==k){
                flag=1; }
            else{
                flag=0; } } }
    return 0; }