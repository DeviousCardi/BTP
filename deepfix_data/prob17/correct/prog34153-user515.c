#include <stdio.h>
int main() {
    int n1,n2,a[n1],b[n2],i,j,count;
    scanf("%d\n",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d ",&a[i]); }
    scanf("\n%d",&n2);
    for(i=0;i<n2;i++) {
        scanf("%d ",&b[i]); }
    for(i=0;i<n1;) {
        count=0;
        if(b[0]==a[i]) {
            for(j=0;j<n2;j++) {
                if(b[j]==a[j+i]) {
                    count++;
                    continue; }
                else
                    break; } }
        if(count==n2)
            break;
        else
            continue; }
    if(count==n2)
        printf("YES\n");
    else
        printf("NO\n");
	return 0; }