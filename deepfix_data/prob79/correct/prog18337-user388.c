#include <stdio.h>
#include <stdlib.h>
void display(int*,int,int);
int n;
int main() {
    scanf("%d",&n);
    int i;
    int *t;
    t=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) {
        scanf("%d",t+i); }
    display(t,n/2,n/2);
	return 0; }
int s1(int a,int *t) {
    int i,s=0;
    for(i=0;i<a;i++) {
        s=s+*(t+i); }
    return s; }
int s2(int b,int *t) {
    int i,s=0;
    for(i=b;i<n;i++) {
        s=s+*(t+i); }
    return s; }
void display(int *t,int a,int b) {
    if(s1(a,t)>s2(b,t)) {
        display(t,a-1,b+1);
        return; }
    if(s1(a,t)<s2(b,t)) {
        display(t,a+1,b-1);
        return; }
    if(a==0||b==0) {
        printf("%d %d",a,b);
        return; }
    printf("%d %d",a,b); }