#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[100],b[100],t,n,x,y,i,j;
    int k=0,l=0;
    scanf("%d%d&d%d\n",&n,&t,&x,&y);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<t;i++) {
        scanf("%d",&b[i]) }
    for(i=0;i<n;i++)
    for(j=l;j<t;j++)
    if(b[j]>=a[i]-x&&b[j]<=a[i]+y) {
        l++;k++;
        break; }
    printf("%d\n",k);
    l=0;
    for(i=0;i<n;i++)
    for(j=l;j<t;j++)
    if(b[j]>=a[i]-x&&b[j]<=a[i]+y) {
        l++;
        printf("%d %d\n",i+1,j+1);
        break; }
	return 0; }