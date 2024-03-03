#include <stdio.h>
int main() {
    int arr[100],j,n,i,flag=0,count;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d,",&arr[i]);
    for(i=0;i<n;i++){
        count=0;
        for(j=0;(j<n);j++){
            if(j==i) continue;
            if(arr[i]==arr[j]) count++; }
        if(count+1!=arr[i]){
            flag=1;
            break; } }
    if(flag==0) printf("Yes");
    else if(flag==1) printf("No");
    return 0; }