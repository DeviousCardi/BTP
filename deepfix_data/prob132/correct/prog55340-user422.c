#include <stdio.h>
int main() {
    int n,i,a=0;
    scanf("%d",&n);
    int arr[n],cnt[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if((arr[i])>n)
        a=1;
        else
        cnt[arr[i]]+=1; }
    if(a==1){
    printf("NO"); }
    else{
        for(i=0;i<n;i++){
        if (cnt[i]==i)
        a=a+0;
        else
        a+=1; }
    if (a==0)
    printf("Yes");
    else
    printf("No"); }
    return 0; }