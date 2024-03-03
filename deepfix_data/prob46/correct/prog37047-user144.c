#include <stdio.h>
int main(){
    int n,m;
    int count=0;
    int i;
    scanf("%d%d",&m,&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            count=count+1; } }
    if(count==m){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }