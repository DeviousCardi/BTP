#include <stdio.h>
int main(){
    int i,n,j,x,t,k[100],m;
    int a,b,c,d,e=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&k[i]); }
    for(j=0;j<n;j++){
        for(m=j+1;m<n;m++){
            if(k[j]<=k[m]){
                continue; }
            else{
                a=k[m];
                k[m]=k[j];
                k[j]=a; } } }
for(b=0;b<n;b++){
    for(c=b+1;c<n;c++){
        if(k[b]==k[c]){
            for(d=c;d<n;d++){
                e=e+1; }
            printf("%d\n",e);
            break; }
        else{
            continue; } } }
printf("%d",e+1);
    return 0; }