#include <stdio.h>
#define MAX 200
int main(){
    int n,i,difference;
    scanf("%d",&n);
    int a[MAX],j;
    for(i=0;i<2*n;i++) {
     scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n-2;j++) {
            if(a[i]==a[j]) {
                difference = j-i;
                printf("%d",difference); } } }
    return 0; }