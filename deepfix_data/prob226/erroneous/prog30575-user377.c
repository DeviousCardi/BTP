#include <stdio.h>
void get(int[],int);
void get(int a[20],int n) {
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]); }
int main() {
    int a[1000];
    int d, n, sum=0,j=0;
    scanf("%d%d",&d,&n);
    get(a,d);
    for(int x=d;x<=n;x++) {
    for(int i=j;i<j+d;i++) {
        sum=sum+a[i]; }
    a[j+d]=sum
    j++; }
    printf("%d",a[n]);
	return 0; }