#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a[20],j,k,t;
    scanf ("%d\n",&j);
    for (i=0;i<j;i++) {
        scanf ("%d\n",&a[i]); }
    scanf("%d\n",&k);
 for (i=0;i<k;i++)
 {   scanf ("%d",&t);
     if (t==0){
         if (a[1]>a[0]) {
             printf ("Yes\n"); }
         else {
             printf ("No\n"); } }
         else if (t==j-1) {
             if(a[t]>a[t-1]) {
                 printf ("Yes\n"); }
             else {
                 printf ("No\n"); } }
         else{
            if((a[t]>a[t-1])&&(a[t]>a[t+1])) {
                 printf ("Yes\n"); }
             else {
                 printf ("No\n"); } } }
     return 0; }