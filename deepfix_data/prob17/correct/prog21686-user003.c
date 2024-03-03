#include <stdio.h>
int main() {
    int n1,n2,i,j;
    scanf("%d",&n1);
    int ar1[n1];
    for(i=0;i<n1;i++){
        scanf("%d ",&ar1[i]); }
    scanf("%d ",&n2);
    int ar2[n2];
    for(i=0;i<n2;i++){
        scanf("%d ",&ar2[i]); }
    j=0;
    for(i=0;i<n2;i++){
        for(;j<n1;j++){
            if(ar1[j]==ar2[i]) {
            j++;}
            break; }
    i++;
    break;}printf("%d",j);
    int l=i;
    int k,flag=0;
    for(k=0;k<(n2-l);k++) {
        if(ar1[i+k]!=ar2[j+k]) {
            flag++; } }
    if(flag == 0)
    printf("YES");
    else
    printf("NO");
	return 0; }