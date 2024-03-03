#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i;
    scanf("%d", &n1);
    int a[n1];
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n2);
    int t[n2];
    for(i=0;i<n2;i++)
        scanf("%d",&t[i]);
    for(i=0;i<n2;i++) {
        int c=t[i];
        if((c!=0)&&(c!=n1)) {
            if(a[c]>a[c-1]&&a[c]>a[c+1])
            printf("Yes\n");
            else
            printf("No\n"); }
        else if(c==0)
            if(a[c]>a[c+1])
            printf("Yes\n");
            else
            printf("No\n");
        else
            if(a[c]>a[c-1])
            printf("Yes\n");
            else
            printf("No\n"); }
	return 0; }