#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int sum;
    sum =0;
    for (i=0;i<n;i++){
    int a[i];
    scanf("%d",&a[i]); }
    for ( int j=1;j<=n;j++){
        int b[j];
        if ((b[j-1]<b[j]) && (b[j]>b[j+1])){
        sum=sum +1; } }
   printf("%d",sum);
    return 0; }