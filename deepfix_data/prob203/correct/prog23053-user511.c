#include <stdio.h>
int main() {
    int n,i,j,flag=0;
    scanf("%d",&n);
    int mat[50];
    for(i=0;i<n;i++) {
        scanf("%d",&mat[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(mat[j]==mat[i])
            { flag=1;
            break;} }
        if(flag==1) {
            printf("YES");
            break;} }
    if(flag==0)
    printf("NO");
	return 0; }