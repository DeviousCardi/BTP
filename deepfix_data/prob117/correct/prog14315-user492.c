#include <stdio.h>
#include <stdlib.h>
 int toh(int a) {
    int n;
     if(a==0)
     return 0;
     else {
         n= 2*toh(a-1) + 1; }
     return n; }
int main() {
    int toh(int x),k=0;
    int n,i,j,a[50];
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
      scanf("%d\n",&a[i]);
         for(j=0;j<100;j++) {
             if(a[i]==toh(j)) {
             printf("yes\n");
            break; }
             if(a[i]==toh(j)){
            break;}
            if(a[i]<0){
                printf("no"); }
               else if(a[i]!=toh(j)){
                 k=k+1;} }
                if(k==100)
                printf("no\n"); }
	return 0; }