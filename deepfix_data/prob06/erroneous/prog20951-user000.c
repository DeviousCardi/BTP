#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,i,j;
	j=-1;
	int x,y;
	int *s1,*s2;
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&x);
	scanf("%d",&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    for(i=0;i<m;i++){
        scanf("%d ",&b[i]); }
    int sum=0;
    for(i=0;i<m;i++) {
        for(j++;j<n;j++) {
            if((b[i]<=a[j]+y)&&(b[i]+x>=a[j])) {
                sum++;
                break; } } }
    printf("%d\n",count);
    j=-1;
    for(i=0;i<m;i++) {
        for(j=j+1;j<n;j++) {
            if(b[i]<=a[j]+y&&b[i]>=a[j]-x) {
                printf("%d %d\n",j+1,i+1);
                break; } } }
	return 0; }