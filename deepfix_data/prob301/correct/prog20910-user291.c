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
            k=i;
            while(a[k+1]==a[k]) {
             max[i]=max[i]+1;
             k++; }
            mode[i]=a[i]; } }
    int m=0;
    int p=0;
    for(i=0;i<1000;i++) {
        if(max[i+1]<max[i]) {
            if(max[i]>=m) {
                m=max[i];
                if(i>p)
                p=i; } } }
    if(n!=1)
    printf("%d",mode[p]);
    else
    printf("%d",a[0]);
	return 0; }