#include <stdio.h>
void print2(int a[],int n,int d) {
    int i;
   for (i=0 ; i<n-d ; i++) {
       a[i+n-d]=a[i]; } }
void print1(int a[],int n,int d) {
    int i;
   for (i=0 ; i<d ; i++) {
       a[i]=a[n-d+i]; } }
int main() {
    int n,i,d;
    scanf("%d",&n);
    int a[n];
    for(i=0 ; i<n ; i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    print1(&a[n-d],n,d);
    print2(&a[0],n,d);
    for(i=0 ; i<n ; i++) {
        printf("%d",a[i]); }
    return 0; }