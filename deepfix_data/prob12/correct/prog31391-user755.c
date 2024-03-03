#include <stdio.h>
int main(){
    int n,e,i,j,d,min=0;
    scanf("%d\n",&n);
    e=2*n;
    int arr[e];
    for(i=0;i<e;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        for(j=n;j<e;j++) {
            if(arr[j]==arr[i]) {
                d=j-i;
                if(min>d)
                    min=d; } } }
    printf("%d",min);
    return 0; }