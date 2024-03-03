#include <stdio.h>
int main(){
    int l,n;
    scanf("%d\n",&l);
    scanf("%d\n",&n);
    int a[100];
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]); }
    int sum=0,count1=0,count2=0;
    for(int j=0;j<=n;j++){
        for(int k=0;k<=n-k-2;k++){
            sum=a[j]+a[j+k];
            if(sum==l){
                count1++; }
            else{
                count2++; } } }
    if(count1>0){
        printf("lucky"); }
    return 0; }