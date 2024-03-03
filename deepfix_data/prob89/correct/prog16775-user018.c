#include <stdio.h>
int main(){
    int lm,n,i,j,flag=0,a,ar[101];
    scanf("%d",&lm);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a);
        ar[i]=a; }
    for(i=0;i<(n-1);i++){
        for(j=(i+1);j<n;j++){
            if((ar[i]+ar[j])==lm){
                printf("lucky");
                flag=1;
                break; } }
        if(flag==1){
            break; } }
    if (flag==0){
        printf("unlucky"); }
    return 0; }