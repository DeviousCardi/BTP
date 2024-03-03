#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi (int k) {
    if(k<0) {
        return 0; }
    int ret,r=0;
    if(k==0||k==1) {
        ret=1; }
    r=hanoi((k-1)/2);
    if(r==1) {
        ret=1; }
    return ret; }
int main() {
    int k,r,i;
    scanf("%d",&k);
    int a[k];
    for(i=0;i<k;i++) {
       scanf("%d",&a[i]);
       r=hanoi(k);
       if(r==1) {
          printf("yes\n"); }
       else {
           printf("no\n"); } }
	return 0; }