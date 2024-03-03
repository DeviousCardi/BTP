#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,t,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&t);
    printf("%d",t);
    for(i=0;i<t;i++){
       scanf("%d",&j);
       if(n!=1){
           if(j==0){
                if(a[j+1]>a[j])printf("Yes");
                else printf("No"); }
           else {
                if(j==n-1){
                     if(a[j-1]>a[j])printf("Yes");
                     else printf("No"); }
                else {
                     if(a[j+1]>a[j] && a[j-1]>a[j]){
                        printf("Yes"); }
                     else printf("No"); } } }
      else printf("Yes");
      printf("\n"); }
	return 0; }