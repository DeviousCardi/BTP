#include <stdio.h>
int main() {
    int n1,n2,a[n1],b[n2],i,j,count,temp;
    scanf("%d\n",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d ",&a[i]); }
    scanf("\n%d",&n2);
    for(i=0;i<n2;i++) {
        scanf("%d ",&b[i]); }
    for(i=0;i<n1;i++) {
        count=0;
        temp=i;
        if(b[0]==a[i]) {
            for(j=0;j<n2;j++) {
                if(b[j]==a[j+i]) {
                    count++;
                    i++; }
                else
                    break; }
            printf("%d ",count); }
        if(count==n2)
            break;
        else {
            i=temp;
            continue; } }
    if(count==n2)
        printf("%d ",n2);
    else
        printf("NO\n");
	return 0; }