#include <stdio.h>
#include <stdlib.h>
int main() {
    char arr1[1000],arr2[1000];
    int sum[1000];
    int n1,n2,max,i,j;
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    for(i=0;i<n1;i++) {
        scanf("%c",&arr1[i]); }
    scanf("\n");
    for(i=0;i<n2;i++) {
        scanf("%c",&arr2[i]); }
    if(n2>n1) {
        max=n2; }
    else {
        max=n1; }
    for(j=n2;j<max;j++) {
       arr2[j]=0; }
    for(i=n1;i<max;i++) {
       arr1[i]=0; }
    for(i=(max-1);i>=0;i++) {
                sum[i]=((arr1[i]-'0')+(arr2[i]-'0'))%10; }
    for(i=0;i<max;i++) {
        printf("%d",sum[i]); }
	return 0; }