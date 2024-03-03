#include <stdio.h>
int main() {
     int c[401];
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<2*n+1;i++) {
        scanf("%d",&c[i]); }
    int dist;
    int b[201];
    int count=0;
    for(int i=0;i<2*n+1;i++) {
        for(int j=i+1;j<2*n+1;j++) {
            if(c[i]==c[j]) {
                dist=j-i;
                b[count]=dist;
                    count++;
                    break; } } }
    int temp;
    for(int i=0;i<count;i++) {
        for(int j=i+1;j<count;j++) {
            if(b[i]>b[j]) {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp; } } }
    printf("%d",b[0]);
    return 0; }