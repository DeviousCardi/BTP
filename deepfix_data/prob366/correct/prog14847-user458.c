#include <stdio.h>
int main(){
    int n,b[n],max;
    scanf("%d\n",&n);
    int a[n],c[n];
    for(int i=0;i<n/2;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n/2;i++){
        scanf("%d",&b[i]); }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            if(a[i]=b[j]){
                c[i]=j-i+n/2; } } }
    max=c[0];
    for(int i=1;i<n/2;i++){
        if(c[i]<max){
            max=c[i]; } }
    printf("%d",max);
    return 0; }