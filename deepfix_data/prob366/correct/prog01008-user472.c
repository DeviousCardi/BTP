#include <stdio.h>
int min_no(int a,int b) {
    if(a>=b) {
        return b; }
    else {
        return a; } }
int main() {
    int n;
    scanf("%d",&n);
    int A[400];
    for(int i=0;i<n;i++) {
        scanf("%d",&A[i]); }
    int r[200];
    int count=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(A[j]==A[i]) {
                r[count]=j-i;
                count++;
                break; } } }
    int min=1000000;
    for(int i=0;i<count;i++) {
        min=min_no(r[i],min); }
    printf("%d",min);
    return 0; }