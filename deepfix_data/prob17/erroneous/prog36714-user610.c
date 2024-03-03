#include <stdio.h>
int main() {
	int n1,n2,i,flag=0,j,k,count=0;
	int a1[20],a2[20];
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d",&a1[i]); }
    scanf("%d",&n2);
    for(i=0;i<n2;i++) {
        scanf("%d",&a2[i]); }
    for(i=0;i<n2;i++) {
        count=0;
        for(j=0;j<n1;j++) {
            if(a2[i]==a1[j]) {
                i++;
                count++; }
            if((count!=0)&&(a2[i]!=ai[j]))
            count=0; }
        if(flag==1)
        break; }
    if(count==n2)
    printf("YES");
    else
    printf("NO");
    return 0; }