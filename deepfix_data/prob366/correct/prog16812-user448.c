#include <stdio.h>
int main(){
    int i,j,n,count=0,min;
    scanf("%d",&n);
    int a[n+4],b[n+5];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for (i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (a[0]==b[j]){
                min=n-0+j; }
            if (a[i]==b[j]){
                count=n-i+j; }
            if (min>count){
                min=count; } } }
    printf("%d",min);
    return 0; }