#include <stdio.h>
void detdup(int t[],int n);
int main() {
    int n,a[50];
    scanf("%d",&n);
    detdup(a,n);
	return 0; }
void detdup(int t[],int n) {
    int i,c=0,j;
    for(i=0;i<n;i++) {
        scanf("%d",&t[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(t[i]==t[j]) {
                c=c+1; } } }
    if(c==0) {
        printf("NO"); }
    else {
        printf("YES"); }
    return; }