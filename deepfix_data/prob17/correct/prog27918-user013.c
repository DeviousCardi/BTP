#include <stdio.h>
int main() {
    int n1,n2;
    int i=0,j=0;
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    int b[n2];
    for(int j=0;j<n2;j++) {
        scanf("%d",&b[j]); }
    for(int i=0;i<n1;i++) {
       if(b[j]==a[i]) {
           j++; }
       printf("YES"); }
	return 0; }