#include <stdio.h>
int main(){
    int i,max,min,n;
    max=0;
    min=0;
    scanf("%d",&n);
    printf("%d",n);
    int a[n];
    for(i=0;i<n;i=i+1){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i=i+1){
        if (a[i]>max){
        max=a[i]; }
        if (a[i]<min){
            min=a[i]; } }
    for(i=0;i<n;i=i+1){
        if (a[i]==max){
            printf("%d ",min); }
        else if (a[i]==min){
            printf("%d ",max); }
        else{
            printf("%d ",a[i]); }
printf("%d ",a[i]); }
    printf("end");
    return 0; }