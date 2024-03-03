#include <stdio.h>
void detdup(int,int);
int main() {
    int n,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    detdup(a[],n);
	return 0; }
void detdup(int a[],int n) {
    int i,c=0,j;
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                c=c+1; } } }
    if(c==0) {
        printf("NO"); }
    else {
        printf("YES"); }
    return; }