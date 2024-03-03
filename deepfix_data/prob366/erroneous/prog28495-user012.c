#include <stdio.h>
int main() {
     int c[201];
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<2*n;i++) {
        scanf("%d",&c[i]); }
    int min=2*n-1;
    int dist;
    int b[201];
    for(int i=0;i<n;i++) {
        for(int j=n;j<2*n;j++) {
            if(c[i]==c[j]) {
                dist=j-i;
                b[i]=dist; } } } }
    int temp;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(b[i]>b[j]) {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp; } } }
    printf("%d",b[0]);
    return 0; }