#include <stdio.h>
#include <stdlib.h>
int generate(int j){
    int i;
    int number=0;
    if(j==0||j==1)
     return 1;
    else {
        for(i=0;i<j;i++) {
            number=number+ generate(i)*generate(j-i-1); } }
    return number; }
int main() {
    int n,i,arr[15],j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(j=0;j<n;j++) {
        printf("%d\n",generate(arr[j])); }
	return 0; }