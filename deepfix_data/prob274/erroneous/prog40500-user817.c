#include <stdio.h>
int main(){
    int n,i,j;
    int a[10];
    scanf("%d" ,&n);
    for(i=0;i<n;i++) {
        scanf("\n %d" ,&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j]) {
                flag1=1;
                break; } }
        if(flag==1) {
            printf("%d" ,4);
            printf("%d" ,a[n-1]); } } }