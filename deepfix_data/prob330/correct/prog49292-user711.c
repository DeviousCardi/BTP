#include <stdio.h>
int main(){
    int a[100],n,i,count=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=1;i<n-1;i++){
        if((a[i]>a[i-1])&&(a[i]>a[i+1])){
            count+=1; } }
    printf("%d",count);
    return 0; }