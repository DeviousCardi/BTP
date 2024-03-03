#include<stdio.h>
int sum(int arr[])
    int main() {
        int n;
        scanf("%d",&n);
        int arr[n];
        int i,s;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      printf("%d",s);
    return 0;
}}
int sum(arr,i){
    int s;
    if(i==0)
    return arr[i];
    else
        s=arr[i]+sum(arr,(i-1));
            return s; }