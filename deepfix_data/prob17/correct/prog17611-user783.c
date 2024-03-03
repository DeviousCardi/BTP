#include <stdio.h>
int main() {
    int n1,n2,i,d=0,m,j,count=0;
    scanf("%d",&n1);
    int a1[n1];
    for(i=0;i<n1;i++) {
        scanf("%d",&m);
        a1[i]=m; }
    scanf("%d",&n2);
    int a2[n2];
    for(i=0;i<n2;i++) {
        scanf("%d",&m);
        a2[i]=m; }
    for(i=0;i<n1;i++) {
        if(a1[i]==a2[0]) {
            d=i;
            break; } }
    for(i=d;i<n1;i++) {
        for(j=0;j<n2;j++) {
        if(a1[i]==a2[j])
        count=count+1; } }
    if(count==n2)
    printf("YES");
    else
    printf("NO");
	return 0; }