#include <stdio.h>
int main(){
    int l,n;
    scanf("%d\n",&l);
    scanf("%d\n",&n);
    int a[100];
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]); }
    int sum,count=0;
    for(int j=0;j<=n;j++){
        for(int k=0;k<=n-k-1;k++){
            sum=a[j]+a[j+k];
            if(sum==l){
                count++; } } }
    if(count>0){
        printf("lucky"); }
    else{
        printf("unlucky"); }
    return 0; }