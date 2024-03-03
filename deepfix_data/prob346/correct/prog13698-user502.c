#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int p=0;
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                p=a[j];
                a[j]=a[j-1];
                a[j-1]=p; } } }
    for(int i=0;i<n;i++){
        printf("%d",a[i]); }
    printf("end");
    return 0; }