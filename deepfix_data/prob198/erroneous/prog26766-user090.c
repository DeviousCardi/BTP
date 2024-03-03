#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i,j,k=0;
    scanf("%d",&n1);
    int a[20],b[20];
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<n2;j++) {
        scanf("%d",&b[j]); }
    for(i=0;i<n1;i++) {
        if(a[i]>k) {
            k=a[i];
            max=k; }
        if(k>a[i]) {
            k=a[i];
            min=k; } }
      for(j=0;j<n2;j++) {
          if(k=a[j])
          flag++; }
      if(flag=0)
      printf("%d",k);
      else
      printf("No");
	return 0; }