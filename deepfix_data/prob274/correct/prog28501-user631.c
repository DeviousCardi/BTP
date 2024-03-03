#include <stdio.h>
int main(){
    int n,a[100];
    int t,k;
    int pr=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        pr=a[a[i]];
        printf("%d ",pr); }
    return 0; }