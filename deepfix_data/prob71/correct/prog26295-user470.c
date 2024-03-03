#include <stdio.h>
int main() {
    int n,t;
    scanf("%d",&n);
    int a[100000];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t; } } }
    if(n%2!=0){
        printf("%d",a[(n-1)/2]); }
    else{
        printf("%f",(a[(n/2)-1]+a[(n/2)])/2.0); }
    return 0; }