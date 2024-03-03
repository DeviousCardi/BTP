#include <stdio.h>
int main() {
	int flag=1,i,j,n1,n2,a1[20],a2[20];
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++)
	    scanf("%d",&a1[i]);
    scanf("%d\n",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&a2[i]);
    for(i=0;i<n1;i++) {
        if(a1[i]==a2[0]) {
            flag=1;
            for(j=i;j<i+n2-1;j++) {
                if(a1[j]!=a2[j-i])
                    flag=0; }
            if(flag==1)
                break; } }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0; }