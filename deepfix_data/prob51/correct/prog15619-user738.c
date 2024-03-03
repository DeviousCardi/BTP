#include <stdio.h>
int main() {
   int n,i,a[100],temp,index,j,position;
   scanf("%d",&n);
   scanf("%d",&index);
   for(i=0;i<n;i++) {
       scanf("%d",&a[i]); }
   for(i=0;i<n-1;i++) {
        position=i;
        for(j=i+1;j<n;j++) {
            if(a[position]>a[j]) {
                position=j; } }
        if(position!=i) {
            temp=a[position];
            a[position]=a[j];
            a[j]=temp; } }
    printf("%d",a[index-1]);
    return 0; }