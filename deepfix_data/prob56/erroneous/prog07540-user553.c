#include<stdio.h>
#include<stdlib.h>
int catalan(int t) {
    int i,s=0;
    if(t<=1) {
        return 1; }
    else {
        for(i=0;i<t;i++) {
            s=s+catalan(i)*catalan(t-i-1); }
        return s; } }
int main () {
    int i,j,t,a[55];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&a[i]); }
    for(i=0;i<t,i++) {
        for(j=1;j<10;j++) {
            if(a[i]>=catalan(j)) {
                printf("%d\n",catalan(j));
                break; } } }
    return 0; }