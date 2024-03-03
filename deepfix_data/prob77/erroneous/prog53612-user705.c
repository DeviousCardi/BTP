#include <stdio.h>
int main() {
    int wealth[100],n,max,min,flag1,flag2,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&wealth[i]); }
    max=a[0];
    min=a[0];
    for(int i=0;i<n;i++){
       if(max<a[i]){
           max=a[i];
           flag1=i; }
       if(min>a[i]){
           min=a[i];
           flag2=i; } }
    temp=a[flag1];
    a[flag1]=a[flag2];
    a[flag2]=temp;
    for(int i=0;i<n;i++){
        printf("%d",a[i]); }
    printf("end");
    return 0; }