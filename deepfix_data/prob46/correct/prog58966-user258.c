#include <stdio.h>
int main(){
    int i,n,m,p;
    scanf("%d %d",&m,&n);
    p=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            p=p+(n%i==0);
            printf("%d ",i); } }
    printf("%d",p);
    if(p=m){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }