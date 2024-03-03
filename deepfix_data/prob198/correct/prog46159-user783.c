#include <stdio.h>
#include <stdlib.h>
int min(int a,int b) {
    if(a<b)
    return a;
    else
    return b; }
int main() {
    int n1,i,k=99;
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    int n2;
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n1;i++) {
        k=min(a[i],k);
        for(i=0;i<n2;i++) {
            if(k==b[i])
            {k=99;break;} } }
    if(k==99)
    printf("NO");
    else
    printf("%d",k);
	return 0; }