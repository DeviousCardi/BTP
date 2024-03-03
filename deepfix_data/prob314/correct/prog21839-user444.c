#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,m,t;
    char ch;
    int arr[20];
   scanf("%d", &n);
   scanf("\n");
   i=0;
   while(i<n) {
       scanf("%c",&ch);
       if(ch!=EOF && ch!='\n') {
           arr[i]=ch;
           i++; } }
   scanf("%d", &t);
   scanf("\n");
   for(i=0;i<t;i++) {
       scanf("%d", &m);
       scanf("\n");
       if(m==0) {
           if(arr[i]<arr[i+1])
           printf("Yes \n");
           else
           printf("No \n"); }
       else if(m==n-1) {
           if(arr[i]<arr[i-1])
           printf("Yes \n");
           else
           printf("No \n"); }
       else {
           if(arr[i]<arr[i+1]&&arr[i]<arr[i-1])
           printf("Yes \n");
           else
           printf("No \n"); } }
       return 0; }