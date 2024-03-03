#include <stdio.h>
#include <stdlib.h>
int search(int a[],int n,int c) {
    int i,count=0;
    for(i=0;i<n;i++) {
        if(a[i]==c)
        count++; }
    if(count==0)
    return 0;
    else
    return 1; }
int min(int a1[],int a2[],int n1,int n2) {
    min=a[0];
    int i;
    for(i=0;i<n2;i++) {
        if(search(a1,n1,a[i+1])==1) {
            if(a2[i+1]<min)
            min=a2[i+1]; } }
    if(min==a[0]&&search(a1,n1,min)==0)
    return -1;
    else
    return min; }
int main() {
	int a1[20],a2[20];
	int n1,n2,i;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }