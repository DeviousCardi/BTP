#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,rn,count=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<100;i++) {
    scanf("%d",&a[i]);
       count=count+1; }
    for(i=0;i<count;i++) {
        a[count-i]=a[i]; }
    for(i=0;i<n;i++) {
      rn=a[i] }
    if(n==rn) {
        printf("YES"); }
    else
      printf("NO");
	return 0; }