#include <stdio.h>
int main() {
int n,m,k=0,j;
int i,arr[20];
scanf("%d\n",&n);
for(i=0;i<n;i++){
    scanf("%d ",&arr[i]); }
printf("\n");
scanf("%d\n",&m);
for(i=0;i<m;i++){
    scanf("%d ",&arr[i]); }
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(arr[i]==arr[j]){
          k=1; } }
    if(k==1){
        printf("YES"); }
    else{
        printf("NO"); } }
	return 0; }