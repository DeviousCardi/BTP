#include<stdio.h>
int main() {
    int a=1,b,i,j,n,m=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        b=arr[i];
        a=1;
        for(j=i+1;j<n;j++){
            if(arr[j]>b){
                b=arr[j];
                a=a+1; } }
        if(a>m)
        m=a; }
    printf("%d",m);
    return 0; }