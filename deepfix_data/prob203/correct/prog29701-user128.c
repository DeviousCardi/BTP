#include<stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    for(;i<n;i++)
    scanf("%d",&arr[i]);
    int f=1;
    for(i=0;i<n;i++){
        if(f==0)
        break;
        int j=i+1;
        for(;j<n;j++){
            if(arr[i]==arr[j]){
                 f=0;
                break; } } }
    if(f==0)
        printf("YES");
    else
        printf("NO");
    return 0; }