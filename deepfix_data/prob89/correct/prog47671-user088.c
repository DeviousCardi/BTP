#include <stdio.h>
int main(){
    int arr[100],i,n,l,flag=0,diff;
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        if(arr[i]<l) {
            diff=l-arr[i];
            for(i=0;i<n;i++) {
                if(arr[i]==diff) {
                    flag=1;
                    break; } } } }
    if(flag==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }