#include <stdio.h>
int main()
{   int n,count=0,d,e;
    scanf("%d\n",&n);
    int arr[n],check[n+1];
    for(int k=0;k<=n;k++){
        check[k]=-1; }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        check[arr[i]]=arr[i];
        if(count==0){
            for(int j=0;j<i;j++){
                if(arr[j]==arr[i]){
                    check[arr[j]]=0;
                    count++;
                     break; } } } }
    for(int l=1;l<=n;l++){
        if(check[l]==0){
            d=l; }
        if(check[l]==-1){
            e=l; } }
    printf("%d\n%d",d,e);
    return 0; }