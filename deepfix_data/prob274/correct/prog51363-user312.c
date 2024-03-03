#include <stdio.h>
int main() {
    int n,t;
    int k=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    int b[500];
    b[0]=1;
    for(int j=1;j<500;j++) {
       b[j]=a[b[j-1]]; }
    for(int l=2;l<500;l++) {
        if(b[1]==b[l]) {
            k++;
            break; }
        else {
            k++; } }
    printf("%d %d",k+1,k);
return 0; }