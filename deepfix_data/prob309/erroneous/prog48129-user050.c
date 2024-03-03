#include <stdio.h>
int main() {
    int n,x,count=0,flag1=0,flag2=0;
    scanf("%d\n",&n);
    int N[n];
    for(int i=0;i<n;i++) {
        scanf("%d,",&x);
            N[i]=x; }
    for(int i=1;i<=n;i++) {
        count=0;flag1=0;
        for(int x=(i-2);x>=0;x--) {
            if(N(i-1)==N[x]) {
                flag1=1 } }
        if(flag1==0) {
            for(int j=(i);j<n;j++) {
                if(N[i-1]==N[j]) {
                    count=count+1; } } }
        if(count!=i) {
            flag2=1; } }
    if(flag2==1) {
        printf("NO"); }
    else {
        printf("YES"); }
    return 0; }