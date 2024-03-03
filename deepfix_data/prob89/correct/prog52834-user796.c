#include <stdio.h>
int main(){
    int k,n,i,j,d=0;
    scanf("%d",&k);
    scanf("\n%d",&n);
    int a[100];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
    if(a[i]+a[j]==k){
        d=1;
    }}}
    if(d==0)
        printf("unlucky");
    else if(d==1)
    printf("lucky");
    return 0; }