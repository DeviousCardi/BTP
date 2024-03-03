#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for(int i=0;i<n;i++){
    int j;
    b[i]=j;
    k=a[i];
    a[i]=a[j];
    a[j]=k; }
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
    printf("end");
    return 0; }