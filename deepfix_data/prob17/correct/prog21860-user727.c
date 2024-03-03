#include <stdio.h>
void array(int* ,int);
int main() {
    int n,m,i,*a,*b,j,count=1;
    scanf("%d",&n);
    array(*a,n);
    scanf("%d",&m);
    array(*b,m);
    for(i=0;i<n;i++) {
        if(a[i]==b[0]) {
            j=i+1;
            if(a[j]==b[count]) {
                count++;
                j++; } } }
    if(count==m)
    printf("YES\n");
    else
    printf("NO\n");
	return 0; }
void array(int *a,int n) {
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); } }