#include <stdio.h>
int main(){
    int arr[100],i,n,l,tag,flag=0;
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        if(arr[i]<l) {
            l=l-arr[i];
            tag=i;
            for(i=0;i<n;i++) {
                if(i==tag)
                continue;
                else
                if(arr[i]==l) {
                    flag=1;
                    break; } } } }
    if(flag==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }