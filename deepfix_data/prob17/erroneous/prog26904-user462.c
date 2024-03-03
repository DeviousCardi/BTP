#include <stdio.h>
int main() {
    int i,j,n1[20],n2[20],n,m;
    scanf("%d",&n);
    for (i=0;i<=n;i=i+1){
        scanf("%d",n1[i]); }
    scanf("%d",&m);
    for (j=0;j<=m;j=j+1){
        scanf("%d",n1[j]); }
    for (i=0;i<=m;i=i+1){
        for(j=0;j<=m;j=j+1){
            if (n1[i]==n2[j]){
                break; } } }
    for(i=0;i<=m;i=i+1){
        if (n1[i]==n2[m]){
            printf("yes"); }
        else{
            printf(no); } }
	return 0; }