#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,l,m,c=0;
    scanf("%d\n",&n);
    int arr[n];int count[n];
    for(i=0;i<n;i++) {
        scanf("%d\n",&arr[i]) }
    for(j=0;j<n;j++) {
      for(k=0;k<n;k++) {
        if(arr[j]==arr[k])
        count[k]=count[k]+1; } }
     for(l=0;l<n;l++) {
      for(m=0;m<n;m++) {
         if(count[l]>=count[m])
        printf("%d",l); } }
      if
	return 0; }