#include <stdio.h>
int sum = 0;
int valcheck(int arr[], int num, int start, int end, int sum) {
    flag=0;
    if(start>end)
        return flag;
    if(sum==num)
        flag=1;
    return valcheck(arr,num,start+1,end,sum+arr[start]) || valcheck(arr,num,start+1,end,sum); }
int main() {
    int n,num,i,arr[100000],start=0,end;
    scanf("%d%d",&n, &num);
    for(i=0; i<n; i++)
        scanf("%d",arr[i]);
    int check;
    end=n;
    check = valcheck(arr,num,start,end,0);
    if(check==1)
        printf("YES");
    else
        printf("NO");
    return 0; }