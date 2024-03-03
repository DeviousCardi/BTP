#include<stdio.h>
int main() {
    int i,n,j,p,count=0;;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0,count=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(arr[i]==arr[j]) count++; }
        if(count!=arr[i])
        {   printf("No");
            break; }
        p=0; }
    if(p==0) printf("Yes");
    return 0; }