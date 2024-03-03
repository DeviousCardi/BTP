#include<stdio.h>
int main() {
    int i,n,j,p,count=0;;
    scanf("%d",&n);
    int arr[n];
    for(i=0,count;i<n;i++) {
        for(j=0;j<n;j++) {
            count=count+(arr[i]==arr[j]); }
        if(count!=arr[i])
        {   printf("No");
            p=1;
            break; }
        p=0; }
    if(p==0) printf("Yes");
    return 0; }