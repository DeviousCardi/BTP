#include <stdio.h>
int main(){
    int n;
    int a[10000];
    int i;
    int j;
    int temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp; } } }
    for(i=;i<n;i++){
        printf("%d ",a[i]); }
    printf("end");
    return 0; }