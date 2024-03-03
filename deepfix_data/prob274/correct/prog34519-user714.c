#include <stdio.h>
int main(){
    int n,m,count=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    m=arr[0];
    while(i<n){
        for(i=1;i<n;i++){
        if (i==m){
            count++;
            m=arr[i];
            i++; } }
        if(m==arr[0]&&count!=0)
             break; }
    printf("%d %d",count+1,count);
    return 0; }