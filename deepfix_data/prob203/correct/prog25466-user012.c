#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[50];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int flag=0;
    for(int i=0;i<n;i++) {
        for(int j=1+1;j<n;j++) {
            if(a[i]==a[j]) {
            flag=1; } } }
    if(flag==1)
    printf("YES");
    else
    printf("NO");
	return 0; }