#include <stdio.h>
#include <stdlib.h>
int towers (int num) {
    static int count=0;
    if(num==0) {
        return count; }
    if(num>0) {
        count++;
        towers(num-1); } }
int main() {
    int cases, num,i,b;
    scanf("%d",&cases);
    int a[1000];
    for(i=0;i<cases;i++) {
        scanf("%d", &a[i]); }
    for(i=0;i<cases;i++) {
        num=a[i];
    b=towers(num);
    printf("%d\n",b); }
	return 0; }