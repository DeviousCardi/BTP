#include <stdio.h>
int main() {
    int n,x,count,flag1=0,flag2=0;
    scanf("%d\n",&n);
    int N[n];
    for(int i=0;i<n;i++) {
        scanf("%d,",&x);
            N[i]=x; }
    for(int i=0;i<n;i++) {
        flag1=0;
        for(int x=(i-1);x>=0;x--) {
            if(N[i]==N[x]) {
                flag1=1; } }
        if(flag1==0) {
            count=1;
            for(int j=(i+1);j<n;j++) {
                if(N[i]==N[j]) {
                    count=count+1; } }
            if(count!=N[i]) {
                flag2=1; } } }
    if(flag2==1) {
        printf("NO"); }
    else {
        printf("YES"); }
    return 0; }