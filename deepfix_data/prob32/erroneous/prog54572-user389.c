#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        if(i==0) {
            if(a[i]<a[i+1]) {
               printf("Yes");
               break; } }
        else {
           if(i<n-1) {
              if(a[i]<a[i-1]&&a[i]<a[i+1]) {
                 printf("Yes");
                 break; }
            else {
             if(a[i]<a[i-1])
               printf("Yes");
               break; } }
    if(i==n)
     printf("No");
	return 0; }