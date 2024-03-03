#include <stdio.h>
void input(int[],int);
void check(int[],int);
void input(int a[50], int n) {
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]); }
void check(int a[50], int n) {
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++0) {
            if(a[i]==a[j]) {
                printf("YES\n");
                return; } } }
    printf("NO\n"); }
int main() {
    int n;
    int a[50];
    scanf("%d",&n);
    input(a,n);
    check(a,n);
	return 0; }