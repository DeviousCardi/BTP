#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,count=0;
    long int *ap,*bp;
    long int n,m,x,y,a[100001],b[100001];
    scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%ld",&b[i]); }
    ap=a;
    bp=b;
    for(i=0;i<m;i++) {
        int count1=0;
        for(j=0;j<n;j++) {
            if(*bp>=*ap-x&&*bp<=*ap+y)
            {printf("%ld %d %d\n",*bp,i,j);
                printf("%ld %ld\n",ap-a+1,bp-b+1);
                bp++;
                ap++;
                i++;
                count1++;
                break; }
            ap++; }
        if(count1==0);
        bp++; }
	return 0; }