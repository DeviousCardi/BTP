#include <stdio.h>
int main(){
    int min=800;
    int n;
    scanf("%d",&n);
    int a[2*n];
    for(int i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    int b[n];
    for(int i=0;i<2*n;i++) {
        for(int j=i+1;j<2*n;j++) {
            if(a[j]==a[i]) {
                b[i]=j-i; } } }
    for(int i=0;i<n;i++) {
        if(b[i]<min)
        min=b[i]; }
    printf("%d",min);
    return 0; }