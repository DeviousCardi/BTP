#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j,tmp=0,d=0;
    scanf("%d\n",&n);
    int c[n],a[n];
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]); }
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++) {
        scanf("%d\n",&b[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i]==b[j])
            {d=0;
                break; }
            else if(a[i]!=b[j])
            {d=1;
                c[i]=a[i]; } } }
    for(i=0;i<n;i++) {
        printf("%d",c[i]); }
	return 0; }