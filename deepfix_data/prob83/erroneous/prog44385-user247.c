#include <stdio.h>
    int rot(int a[],n+1);
    int j;
    for(j=0;j<n+1;j++)
            {a[j]=a[j+1];}
    return a[j];
int main() {
    int n,a[100],i,d,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=n-1;i>=n-d;i--){
        rot(a[],n);
        a[0]=a[i+1]; }
    for(i=0;i<n;i++){
        printf("%d ",a[i]); }
    return 0; }