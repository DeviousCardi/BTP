#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2;
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    int s1[n1],s2[n2];
    int i1,i2,i;
    int t[n1];
    for(i1=0;i1<n1;i1++) {
        scanf("%d",&s1[i1]); }
    printf("\n");
    for(i2=0;i2<n2;i2++) {
        scanf("%d",&s2[i2]); }
    if(n1==n2) {
        for(i=0;i<n1;i++) {
            t[i]=s1[i]+s2[i]; } }
    for(i=1;i<n1;i++)
    printf("%d",t[i]);
	return 0; }