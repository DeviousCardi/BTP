#include <stdio.h>
    int rot(int a[100],int n)
    {int j,fl;
    fl=a[n-1];
    for(j=n-1;j>0;j--)
            {a[j]=a[j-1];}
            a[0]=fl;
    return a[j];}
int main() {
    int n,a[100],i,d,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=n-1;i>=n-d;i--){
        rot(a,n);
        for(j=0;j<n;j++){
        printf("%d ",a[i]);} }
    return 0; }