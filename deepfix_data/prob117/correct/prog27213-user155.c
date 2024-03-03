#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi (int k) {
    int ret;
    if(k==0||k==1) {
        ret=1; }
    else if(hanoi((k-1)/2)==1) {
        ret=1; }
    else if(k<0) {
        ret=0; }
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