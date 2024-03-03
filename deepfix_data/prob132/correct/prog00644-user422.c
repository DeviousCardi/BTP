#include <stdio.h>
int main() {
    int n,i,a=0;
    scanf("%d",&n);
    int arr[2*n];
    int cnt[n];
    for(i=0;i<n;i++){
        cnt[i]=0; }
    for(i=0;i<2*n;i++){
        scanf("%d",&arr[i]);
        if(!(i%2==0))
        continue;
        if((arr[i])>n)
        a=1;
        else
        cnt[arr[i]]=cnt[arr[i]]+1;
        printf(" %d ",arr[i]); }
    if(a==1){
    printf("Noo"); }
    else{
        for(i=0;i<n;i++){
        if (cnt[i]==i)
        a=a+0;
        else{
            if(cnt[i]==0)
            a=a+0;
            else
            a+=1; } }
    if (a==0)
    printf("Yes");
    else
    printf("No"); }
    return 0; }