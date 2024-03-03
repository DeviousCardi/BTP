#include <stdio.h>
int main() {
    int n,sum,flag=0,i,j,a;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d,",&arr[i]); }
    for(i=0;i<n;i++){
        a=arr[i];
        sum=0;
        for(j=i+1;j<n;j++){
            if(arr[j]==a){
                arr[j]='$';
                sum=sum+1; } }
        if(sum==a){
                flag=0;
                continue; }
            else{
                flag=1;
                break; } }
    if(flag==0)
    printf("Yes");
    else
    printf("No");
     return 0; }