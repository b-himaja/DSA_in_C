#include <stdio.h>
int main(){
int n,i,j,key;
printf("Enter the number of elements to be sorted ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements ");
for (int h=0; h<n;h++){
scanf("%d",&arr[h]);
}
for (j=1;j<n;j++){
key=arr[j];
i=j-1;
while (i>=0 && arr[i]>key)
{
arr[i+1]=arr[i];
i-=1;
}
arr[i+1]=key;
}printf("Sorted array is:\n");
for (int k=0; k<n; k++){
printf("%d\n",arr[k]);
}
}
