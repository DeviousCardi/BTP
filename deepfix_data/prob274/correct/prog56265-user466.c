#include <stdio.h>
int main(){
    int i,j,n;
    int a[100];
    int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf(" %d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
        if(a[i]==a[j])
        printf("%d",&j);
        break; } }
    return 0; }