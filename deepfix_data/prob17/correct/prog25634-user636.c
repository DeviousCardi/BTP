#include <stdio.h>
int main() {
    int n1,n2,c,d,i,j,k;
    c=d=0;
    int l1[30],l2[30];
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d",&l1[i]); }
    scanf("%d",&n2);
    for(i=0;i<n2;i++) {
        scanf("%d",&l2[i]); }
    for(i=0;i<(n1-n2+1);i++)
    {   d=d+1;
        c=0;
        for(j=0;j<n2;j++,i++) {
            if(l1[i]==l2[j])
            c=c+1; }
        if(c==n2) {
            printf("YES");
            break; }
        if(j==(n2-1)&&i==(n1-1))
        printf("NO"); }
	return 0; }