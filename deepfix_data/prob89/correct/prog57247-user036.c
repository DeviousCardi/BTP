#include <stdio.h>
int main(){
    int l,n;
    scanf("%d\n",&l);
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]); }
    int sum,count=0;
    for(int j=0;j<=n-1;j++){
        for(int k=0;k<=n-k-2;k++){
            sum=a[j]+a[j+k];
            if(sum==l){
                count++; } } }
    if(count>0){
        printf("lucky"); }
    else{
        printf("unlucky"); }
    return 0; }