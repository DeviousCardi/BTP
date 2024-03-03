#include <stdio.h>
int main() {
    int n,a[100],i,d,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=n-1;i>n-d-1;i--){
        for(j=0;j<n;j++)
            {a[j]=a[j+1];}
        a[0]=a[i]; }
    for(i=0;i<n;i++){
        printf("%d",a[i]); }
    return 0; }