#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
        for(int i=0;i<n;i++) {
        if(a[i+1]>a[i]){
            a[i]=a[i+1]; } }
    float m;
    if((n%2)!=0){
        m=a[(n/2)+1];
        printf("%f",m); }
    else{
        m=(a[n/2]+a[(n+2)/2])/2.0;
        printf("%.1f",m); }
    return 0; }