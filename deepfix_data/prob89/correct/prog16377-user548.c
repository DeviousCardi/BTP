#include <stdio.h>
int main(){
    int n,a[105],i,j,k,flag=0;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if((a[i]+a[j])==k){
            flag=1;
            break; }
            else
            flag=0; }
        if(flag==1){
        break; } }
    if(flag==1) {
        printf("lucky"); }
    else
    printf("unlucky");
    return 0; }