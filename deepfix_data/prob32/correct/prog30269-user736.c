#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){ {
    scanf("%d\n",&a[i]);}
       if (i==0){if(a[i]<a[i+1]){
           printf ("Yes\n");
       }    else{
         printf("No\n");} }
       if (i>0&&i<n){
           if(a[i]<a[i+1]&&a[i]<a[i-1])
           printf("Yes\n"); }
    else{
         printf("No\n"); }
    if(i==n){
        if (a[i]<a[i-1])
{         printf("Yes\n"); }
    else {
        printf("No\n"); } } }
    return 0; }