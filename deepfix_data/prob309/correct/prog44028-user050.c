#include <stdio.h>
int main() {
    int n,x,count=0,flag=0;
    scanf("%d\n",&n);
    int N[n];
    for(int i=0;i<n;i++) {
        scanf("%d,",&x);
            N[i]=x; }
    for(int i=1;i<=n;i++) {
        count=0;
        for(int j=0;j<n;j++) {
            if(N[i-1]==N[j]) {
                count=count+1; } }
        if(count!=i) {
            flag=1; } }
    if(flag==1) {
        printf("NO"); }
    else {
        printf("YES"); }
    return 0; }