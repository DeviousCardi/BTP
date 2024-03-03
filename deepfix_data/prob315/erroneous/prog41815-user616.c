#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",n);
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d",ar[i]); }
    int d=0;
    int s[n];
    for(int i=0;i<n;i++) {
        int sm=0;
        for(int j=i+1;j<n;j++) {
            if(ar[j]<ar[i])
            sm++; }
        s[i]=sm;
        d=d+sm; }
    printf("%d\n",d);
    forIint i=0;i<n;i++){
    printf("%d ",s[i]); }
	return 0; }