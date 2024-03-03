#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float hanoi (int k) {
    float ret=0;
    if(k<0) {
        return 0; }
    if(k==0||k==1) {
        return 1; }
    else {
        ret=hanoi((k-1)/2); }
    return ret; }
int main() {
    int k,i;
    float r=0;
    scanf("%d",&k);
    int a[k];
    for(i=0;i<k;i++) {
       scanf("%d",&a[i]);
       r=hanoi(a[i]);
       if(r==1) {
          printf("yes\n"); }
       else {
           printf("no\n"); } }
	return 0; }