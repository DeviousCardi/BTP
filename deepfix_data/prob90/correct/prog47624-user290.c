#include <stdio.h>
int main(){
    int k,n,i,j;
    int a[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j]) == k){
                printf("lucky");
                return 0; } } }
    printf("unlucky");
    return 0; }