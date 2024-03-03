#include <stdio.h>
int main(){
    int n,i,big;
    int b[100],a[100],c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    big=a[0];
    for(i=0;i<n;i++){
        c[a[i]]=b[i];
        for(i=0;i<n;i++){
            if(a[0]>a[i]){
                a[i]=a[0]; }
        printf("%d",c[a[i]]); } }
    printf("end");
    return 0; }