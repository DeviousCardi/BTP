#include <stdio.h>
int main() {
    int a1[20],a2[20];
    int n1,n2;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++) {
        scanf("%d",&a1[i]); }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++) {
        scanf("%d",&a2[i]); }
    int i,j,k,count;
    count=0;
    i=0;
        for(j=0;j<n1;j++) {
            if(a2[j]==a1[i]) {
                for(k=0;k<n2;k++) {
                  if(a2[k]==a1[j])
                  count=count+1; }
            break; } }
    if(count==n2)
    printf("YES");
    else
    printf("NO");
	return 0; }