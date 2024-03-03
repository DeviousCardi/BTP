#include<stdio.h>
int main() {
    int n,i,count=1,max,t,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int a[n];
    for(i=0;i<n;i++){
        t=arr[i];
        for(j=i+1;j<n;j++){
            if(arr[j]>t){
                t=a[j];
                count++; } }
        a[i]=count; }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
        max=a[i]; }
    printf("%d",max);
    return 0; }