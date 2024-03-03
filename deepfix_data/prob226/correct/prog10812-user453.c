#include <stdio.h>
int main() {
    int n,d;
    int a[30];
    scanf("%d %d\n",&d,&n);
    for(int i=0;i<d;i++) {
        scanf("%d",&a[i]); }
    for(int i=d;i<=n;i++) {
    int k=i-d;
    a[i]=0;
     for(int j=i-1;j>=i-d;j--)
      {a[i]=a[i]+a[j]; } }
    printf("%d",a[n]);
	return 0; }