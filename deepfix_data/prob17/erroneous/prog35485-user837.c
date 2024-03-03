#include <stdio.h>
int main() {
    int N1[20];
    int N2[20];
    int i,j,n1,n2;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    scanf("%d",&N1[i]);
    scanf("%d",&n2);
    for(j=0;j<n2;j++)
    scanf("%d",&N2[j]);
    for(k=0;k<n1;k++) {
        if(l=(k+1);l<n2;l++) {
            if(N1[k]==N2[l]) {
                printf("YES");
                break; } }
        else {
            printf("NO"); } }
	return 0; }