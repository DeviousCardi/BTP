#include <stdio.h>
int main() {
    int h,p;
    scanf("%d",&h);
    scanf("%d",&p);
    int a[p];
    for(int i=0;i<p;i++){
        scanf("%d",&a[i]); }
    int sum=0;
    int j;
    for(j=0;j<p;j++){
        if(a[p]<a[p+1]){
           sum=sum+(a[p+1]-a[p]); }
        else{ }
    return 0; }