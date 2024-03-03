#include <stdio.h>
int main(){
    int a1;
    int a2;
    int n;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&n);
    int a11=a1;
    int a22=a2;
    int i=2;
    while(i<n){
        a11=(a11+a22-2);
        i++;
        if(i==n){
            printf("%d",a11);
            return 0; }
        a22=(a11+a22-2);
        i++;
        if(i==n){
            printf("%d",a22);
            return 0; } }
    return 0; }