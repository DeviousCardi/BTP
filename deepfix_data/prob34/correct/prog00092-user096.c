#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a[20],j,k,t;
    scanf ("%d\n",&j);
    for (i=0;i<j;i++) {
        scanf ("%d\n",&a[i]); }
    scanf("%d\n",&k);
 for (a[i]=0;a[i]<k;a[i]++)
 {   scanf ("%d",&t);
     while (a[t]==0){
         if (a[1]>a[0]) {
             printf ("Yes\n"); }
         else {
             printf ("No\n"); } }
         while (a[t]==t) {
             if(a[t]>a[t-1]) {
                 printf ("Yes\n"); }
             else {
                 printf ("No\n"); } }
             for (a[t]=1;a[t]<t-1;a[t]++) {
                 if (a[t]>a[t-1]&&a[t]>a[t+1]) {
                 printf ("Yes\n"); }
             else {
                 printf ("No\n"); } } }
     return 0; }