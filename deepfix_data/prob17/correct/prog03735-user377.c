#include <stdio.h>
void get (int[], int);
int check(int[],int[], int ,int);
void get(int a[20], int n) {
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]); }
int check(int a[20], int b[20], int n1, int n2) {
    int j,i=0;
    while(i<n1) {
    for(j=0;j<n2;j++) {
            if(a[i]!=b[j])
            break;
            else
        i++; }
        if(j==n2) {
            printf("YES\n");
            return 0; }
        i++; }
    printf("NO\n");
	return 0; }
int main() {
    int n1, n2;
    int a[20], b[20];
    scanf("%d",&n1);
    get(a,n1);
    scanf("%d",&n2);
    get(b,n2);
    check(a,b,n1,n2);
	return 0; }