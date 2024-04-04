#include <stdio.h>
int main(){
int n,i,j;
char key;
printf("Enter the number of elements to be sorted ");
scanf("%d",&n);
char arr[n];
printf("Enter the elements ");
scanf("%s",arr);
for (j=1;j<n;j++){
key=arr[j];
i=j-1;
while (i>=0 && (int)arr[i]>(int)key)
{
arr[i+1]=arr[i];
i-=1;
}
arr[i+1]=key;}
printf("Sorted array is:\n");
for (int k=0; k<n; k++){
printf("%c\n",arr[k]);
}
}
