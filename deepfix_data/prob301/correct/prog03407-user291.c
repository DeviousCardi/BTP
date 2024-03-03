#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[10000];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int max[10000];
    int mode[1000];
    for(i=0;i<n;i++) {
        max[i]=0; }
    int k;
    for(i=0;i<n;i++) {
        if(a[i+1]==a[i]) {
            while(a[i+1]==a[i]) {
                k=i;
             max[k]=max[k]+1;
             i++; }
            mode[i]=a[i]; } }
    int m=0;
    int p=0;
    for(i=0;i<1000;i++) {
        if(max[i+1]<max[i]) {
            if(max[i]>m) {
                m=max[i];
                p=i; } } }
    printf("%d",mode[p]);
	return 0; }