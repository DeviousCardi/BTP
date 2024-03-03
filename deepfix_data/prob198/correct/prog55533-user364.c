#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j,swap;
    int a[20],b[20],c[20];
    scanf("%d \n",&n);
    for(i=0;i<n;i++) {
        scanf("%d \n",&a[i]); }
    scanf("\n");
	scanf("%d",&m);
	for(i=0;i<m;i++) {
	   scanf("%d \n",&b[i]); }
	swap=0;
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-1-i;j++) {
          if(a[j]>a[j+1]) {
              swap=a[j];
              a[j]=a[j+1];
              a[j+1]=swap; } } }
    for(i=0;i<n;i++) {
      for(j=0;j<m;j++) {
        if(a[i]==b[j]){break;} }
      if(j==(m))
       {printf("%d",a[i]);
        return 0;} }
	if(i==n){printf("NO"); }
	return 0; }