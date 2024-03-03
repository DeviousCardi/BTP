#include <stdio.h>
int a[100000],n,k;
int main() {
   void seqsort(void);
   void display(void);
   seqsort();
   display();
   return 0; }
void seqsort(void) {
    int i,j,t;
    for(i=0;i<n-1;i++) {
        for(j=0;j<n;j++) {
            if(a[i]>a[j]) {
                t=a[j];
                a[j]=a[i];
                a[i]=t; } } } }
void display(void) {
    int i;
    for(i=0;i<k;i++) {
    printf("%d",a[k-1]); } }