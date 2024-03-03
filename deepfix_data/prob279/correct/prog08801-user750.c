#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int arr[n],check[n+1];
    for(int k=0;k<=n;k++){
        check[k]=1; }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        check[arr[i]]=arr[i];
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                check[j+1]=0;
                break; } } }
    for(int l=0;l<=n;l++){
        if(check[l]==0){
            printf("%d\n",l); }
        if(check[l]==1){
            printf("%d\n",l); } }
    return 0; }