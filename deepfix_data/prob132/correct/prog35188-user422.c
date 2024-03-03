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
        cnt[arr[i]]+=1;
    }printf("%d",n);
    if(a==1){
    printf("NO"); }
    return 0; }