#include <stdio.h>
int main(){
    int arr[100],i,n,l,tag,flag=0,s;
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        if(arr[i]<l) {
            s=l-arr[i];
            tag=i;
            for(i=0;i<n;i++) {
                if(arr[i]==s) {
                    flag=1;
                    break; } } } }
    if(flag==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }