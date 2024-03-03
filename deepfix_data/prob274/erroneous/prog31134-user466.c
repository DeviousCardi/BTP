#include <stdio.h>
int main(){
    int i,j,n;
    int a[100];
    scanf("%d",&n);
    for(i=0,i<n,i++)
    scanf("%d",&a[i]);
    for(i=0,i<n,i++) {
        for(j=0,j<i,j++) {
        if(a[j]==a[i])
        printf("%d",j); } }
    return 0; }