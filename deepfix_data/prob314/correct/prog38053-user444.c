#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,m,t;
    int ch;
    int arr[20];
   scanf("%d", &n);
   scanf("\n");
   i=0;
   while(i<n) {
       scanf("%d",&ch);
           arr[i]=ch;
           i++; }
   scanf("%d", &t);
   scanf("\n");
   for(i=0;i<t;i++) {
       scanf("%d", &m);
       scanf("\n");
       if(m==0 &&n==1) {
           printf("Yes \n");
       }else if(m==0) {
           if(arr[m]<arr[m+1])
           printf("Yes \n");
           else
           printf("No \n"); }
       else if(m==n-1) {
           if(arr[m]<arr[m-1])
           printf("Yes \n");
           else
           printf("No \n"); }
       else {
           if(arr[m]<arr[m+1]&&arr[m]<arr[m-1])
           printf("Yes \n");
           else
           printf("No \n"); } }
       return 0; }