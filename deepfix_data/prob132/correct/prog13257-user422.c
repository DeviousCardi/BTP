#include <stdio.h>
int main() {
    int n,i,a=0;
    scanf("%d",&n);
    int arr[n];
    int cnt[n];
    for(i=0;i<n;i++){
        cnt[i]=0; }
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if((arr[i])>n)
        a=1;
        else
        cnt[arr[i]]+=1;
              printf(" %d ",a); }
    if(a==1){
    printf("NO"); }
    return 0; }