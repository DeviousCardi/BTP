#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t;
    int a[20],b[20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&t);
    for(i=0;i<t;i++){
      scanf("%d",&b[i]);
      if(n!=1){
      if(b[i]==0){
      if (a[0]<a[1]) {
           printf("Yes\n");}
           else{printf("No\n");} }
    else if(b[i]>0 && b[i]<(n-1)){
      if (a[b[i]]<a[b[i]-1] && a[b[i]]<a[b[i]+1]) {
           printf("Yes\n");}
           else{printf("No\n");} }
    else if (b[i]==n-1){
        if (a[n-1]<a[n-2]){
            printf ("Yes\n"); }
        else printf ("No\n"); }
          else printf("Yes");
      }}
        return 0; }