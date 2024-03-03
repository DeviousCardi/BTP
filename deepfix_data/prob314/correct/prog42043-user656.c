#include <stdio.h>
#include <stdlib.h>
int main() {
      int n;
    scanf("%d",&n);
    int a[n];
    int i;
    if(n==1) {
        printf("Yes");
    return 0; }
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int j;
    scanf("%d",&j);
    int k;
    for(i=1;i<=j;i++) {
        scanf("%d",&k);
        if(k==0) {
            if(a[0]>a[1])
            printf("Yes\n");
            else
            printf("No\n"); }
        else {
            if(k==(n-1)) {
                if(a[n-1]>a[n-2])
                printf("Yes\n");
                else
                printf("No\n"); }
            else {
                if((a[k-1]<a[k])&&(a[k+1]<a[k]))
                printf("Yes\n");
                else
                printf("No\n"); } } }
	return 0; }