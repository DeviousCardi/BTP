#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int count,max=0;
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                count++;
                a[i]=a[j]; } }
        if(count>max){
            max=count; } }
    printf("%d",max);
    return 0; }