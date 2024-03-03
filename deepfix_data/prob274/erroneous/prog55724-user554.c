#include <stdio.h>
int main(){
    int n,d,t;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]) }
    for(int i=1;i<n;i++){
        int j;
        for(int j=i-1;j>=0;j--){
            if(arr[j]==arr[i]){
                d=j-i;
                break; } }
        if(j!=-1)
            t=i+1;
            break; }
    printf("%d  %d",t,d);
    return 0; }