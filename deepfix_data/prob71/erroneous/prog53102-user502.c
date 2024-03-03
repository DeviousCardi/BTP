#include <stdio.h>
int main() {
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
        for(int i=0;i<n;i++) {
            k=a[i];
            for(int j=0;j<n;j++){
             if(a[j]<=a[i]){
                 a[i]=a[j];
                 a[j]=k
                 k=a[i]; } } }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]); }
    if((n%2)!=0){
       int m=a[(n/2)];
        printf("%d",m); }
    else{
       float m=(a[n/2]+a[(n+2)/2])/2;
        printf("%.1f",m); }
    return 0; }