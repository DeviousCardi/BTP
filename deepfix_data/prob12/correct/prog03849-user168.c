#include <stdio.h>
#define MAX 200
int main(){
    int n,i,difference;
     int temp=0;
    scanf("%d",&n);
    int a[MAX],j;
    for(i=0;i<2*n;i++) {
     scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                difference = j-i;
                printf("%d",difference); } } }
    return 0; }