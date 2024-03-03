#include<stdio.h>
int main(){
    int i=0,n,c1=0;
    scanf("%d",&n);
    int arr[n],cnt[n];
    for(;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        cnt[i]=0;
        int i2=i+1;
        for(;i2<n;i2++){
            if(arr[i]>arr[i2]){
                c1++;
                cnt[i]=cnt[i]+1; } } }
    printf("%d\n",c1);
    for(i=0;i<n;i++){
        printf("%d ",cnt[i]); }
    return 0; }