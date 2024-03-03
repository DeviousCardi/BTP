#include <stdio.h>
int main(){
    int i,n,j,x,t,k[100],m;
    int a,b,c;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&k[i]); }
    for(b=0;b<n;b++){
    for(j=0;j<n;j++){
        for(m=j+1;m<=n;m++){
            if(k[j]<=k[m]){
                continue; }
            else{
                a=k[m];
                k[m]=k[j];
                k[j]=a; } } }
printf("%d ",k[b]);
    return 0; }