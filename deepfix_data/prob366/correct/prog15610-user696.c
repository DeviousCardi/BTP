#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++){
        scanf("%d",&a[i]); }
    int b[n];
    for(i=0;i<n;i++){
        b[i]=a[i]-a[i+n];
        if(b[i]<0) b[i]=-b[i]; }
    int min=b[0];
    for(i=1;i<n;i++){
        if(min>b[i])
        min=b[i]; }
     for(i=1;i<n;i++){
         printf("%d",b[i]);}
    printf("%d",min);
    return 0; }