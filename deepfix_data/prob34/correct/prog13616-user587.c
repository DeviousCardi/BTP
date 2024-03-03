#include <stdio.h>
#include <stdlib.h>
int main() {
        int i,n,t,a[20],p[20];
        scanf("%d",&n);
        for(i=0;i<n;i++) {
           scanf("%d",& a[i]); }
           scanf("%d",&t);
        for(i=0;i<t;i++){
           scanf("%d",&p[i]);
        if(!(p[i]==0||p[i]==n-1)){
        if(a[p[i]]>a[p[i]-1]&&a[p[i]]>a[p[i]+1]) {
                printf("Yes\n"); }
        else {
                printf("No\n"); } }
            else if(p[i]==0) {
            if(a[p[i]]>a[p[i]+1]) {
                printf("Yes\n"); }
            else {
                printf("No\n"); } }
            else if(p[i]==n-1) {
            if(a[p[i]]>a[p[i]-1]) {
                printf("Yes\n"); }
            else {
                printf("No\n"); } } }
        return 0; }