#include <stdio.h>
int main() {
    int n,i,j,k,temp;
    float m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]); }
    for(j=0;j<n;j++){
        for(k=0;k<n-1;k++){
            if(a[k]>a[k+1]){
            temp=a[k+1];
            a[k+1]=a[k];
            a[k]=temp; } } }
    if(n%2==0){
        m=(a[n/2]+a[(n/2)-1])/2.0; }
    else{
        m=a[(n/2)]; }
    printf("%.1f",m);
    return 0; }