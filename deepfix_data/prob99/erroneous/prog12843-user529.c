# include <stdio.h>
void fill(int[]int[],int);
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n],maxtill[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        maxtill[i]=1; }
    for(i=0;i<n;i++)
        fill(arr,maxtill,i); }
void fill(int arr[]int maxtill[],int i) {
    int j,max1,max2=1;
    for(j=0;j<i;j++) {
        if(arr[j]<arr[i]&&maxtill[j]>max2)
            max2=maxtill[j]; }
    maxtill[i]=max2; }