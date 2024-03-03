#include <stdio.h>
int main(){
    int n,a[10000],c,d,t;
    scanf("%d",&n);
    scanf("%d",&a[0]);
    for(int i=1;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[i]){
                t=a[j];
                a[j]=a[i];
                a[i]=t; } } }
    for(int i=0;i<n;i++){
        printf("%d ",&a[i]); }
    printf("end");
    return 0; }