#include <stdio.h>
void print(int a[],int n,int d) {
   int i;
   for(i=0 ; i<d ; i++) {
       printf("%d ",a[i]); } }
int main() {
    int n,i,d;
    scanf("%d",&n);
    int a[n];
    for(i=0 ; i<n ; i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    print(&a[2],n,d);
    return 0; }