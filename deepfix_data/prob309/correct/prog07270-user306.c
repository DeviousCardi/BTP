#include <stdio.h>
int main() {
    int n,i,j,k,count;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    int flag;
    for(j=0;j<n;j++){
        int flag=0;
        count=0;
        for(k=0;k<n;k++){
            if(arr[j]==arr[k])
            count=count+1; }
        if(count!=arr[j]){
            flag=1;
            break; } }
    if(flag==0)
    printf("Yes");
    if(flag==1)
    printf("No");
    return 0; }