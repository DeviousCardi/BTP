#include <stdio.h>
int main() {
    int n,x,flag=0,a,b,flag2=0;
    scanf("%d\n",&n);
    int N[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        N[i]=x;printf("%d",N[i]); }
    for(int i=0;i<n;i++) {
        flag=0;
        for(int j=1;j<n;j++) {
            if(N[i]==j) {
                flag=1; } }
        if(flag==1) {
            continue; }
        else {
            a=N[i]; } }
    for(int i=0;i<n;i++) {
        flag=0;
        for(int j=1;j<n;j++) {
            if(N[i]==j) {
                flag2=1;
                for(int k=(j+1);k<n;k++) {
                    if(N[i]==k) {
                        flag2=2; } } } }
        if(flag2==2) {
            b=N[i]; } }
    printf("%d\n%d",b,a);
    return 0; }