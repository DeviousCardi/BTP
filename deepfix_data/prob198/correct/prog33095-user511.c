#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j,flag=0,cnt=10000;
    scanf("%d",&n);
    int mat1[n];
    for(i=0;i<=n;i++) {
        scanf("%d",&mat1[i]); }
     scanf("%d",&m);
    int mat2[m];
    for(i=0;i<=m;i++) {
        scanf("%d",&mat2[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(mat2[j]==mat1[i]) {
                flag=1;
                break; } }
        if(flag!=1 && cnt>mat1[i]) {
            cnt=mat1[i]; } }
    if(cnt==10000) {
        printf("NO"); }
	return 0; }