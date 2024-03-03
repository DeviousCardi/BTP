#include <stdio.h>
int main() {
    int n,i,j,l=0,count=0,flag;
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[n];
    for(i=0;i<n-1;i++){
        scanf("%d,",&arr[i]); }
    scanf("%d",&arr[n-1]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++; } }
        arr1[l]=arr[i];
        arr2[l]=count;
        l++;
        count=0; }
    flag=1;
    for(i=0;i<l;i++){
        if(arr1[i]!=arr2[i]) {
                flag=0;
                break; } }
    if(flag==1)
    printf("Yes");
    else
    printf("No");
    return 0; }