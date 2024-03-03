#include <stdio.h>
int main() {
    int arr[100],j,n,i,flag=0,count;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        count=0;
        for(j=0;(j<n);j++){
            if(j==i) continue;
            if(a[i]==a[j]) count++; }
        if(count!=a[i]){
            flag=1;
            break; } }
    if(flag==0) printf("Yes");
    else printf("No");
    return 0; }