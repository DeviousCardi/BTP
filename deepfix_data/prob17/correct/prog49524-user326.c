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
    int i,j,k,q,count;
    count=0;
    i=0;
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
            if(a2[i]==a1[j])
            {q=j;
            break; } } }
    j=0;
                    for(k=0;k<n2;k++) {
                  if(a2[k]==a1[q])
                  count=count+1;
                  q++; }
    if(count==n2)
    printf("YES");
    else
    printf("NO");
	return 0; }