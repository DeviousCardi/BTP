#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,count=0,count1=0;
    long int *ap,*bp;
     int n,m,x,y,a[100001],b[100001];
    scanf("%d%d%d%d",&n,&m,&x,&y);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]); }
    while(i<n) {
        for(j=count1;j<m;j++)
        {printf("%dj %d\n",j,b[j]);printf("%d %d\n",a[i]-x,a[i]+y);
            if(b[j]>=(a[i]-x)&&b[j]<=(a[i]+y)) {
                count++;count1++;printf("%d\n",count);
                break; } }
        i++; }
    printf("%d\n",count);
	return 0; }