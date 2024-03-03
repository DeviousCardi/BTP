#include <stdio.h>
int main(){
    int n,a[10000],d,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[i]){
                t=a[j];
                a[j]=a[i];
                a[i]=t; } } }
    for(int i=0;i<n;i++){
        printf("%s ",&a[i]); }
    printf("end");
    return 0; }