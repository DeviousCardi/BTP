#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,i,j,k=0,n2,min;
    scanf("%d",&n1);
    int a1[n1];
    for(i=0;i<n1;i++) {
        scanf("%d",&a1[i]); }
    scanf("%d",&n2);
    int a2[n2];
    for(i=0;i<n2;i++) {
        scanf("%d",&a2[i]); }
    min=a1[0];
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
            if(a2[j]==a1[i])
                break; }
        if(j!=n2&&min==a1[i]) {
            min=a1[i+1];
            continue; }
        else if(j!=n2)
            continue;
        else if(min>=a1[i]) {
            k=1;
            min=a1[i]; } }
    if(k==1)
        printf("%d",min);
    else
        printf("NO");
	return 0; }