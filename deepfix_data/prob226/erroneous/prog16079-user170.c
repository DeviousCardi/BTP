#include <stdio.h>
int main() {
    int n,d,j,i;
    scanf("%d %d",&d,&n);
    int a[n],b[d];
    for(i=0;i<d;i {
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++) {
        if(i<d) {
            a[i]=b[i]; }
        else if(i>=d) {
            for(j=i;j<d;j++) {
                a[i]=a[i-j]; } } }
    printf("%d",a[n]);
	return 0; }