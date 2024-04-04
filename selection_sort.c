//selection sort implemented for decreasing order
#include <stdio.h>
void swap(int* p1, int* p2)
{
int temp = *p1;
*p1 = *p2;
*p2 = temp;
}
int main(){int n,i,j,max;
printf("Enter the number of elements to be sorted ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements ");
for (int h=0; h<n;h++){
scanf("%d",&arr[h]);
}
for (i = 0;i<n-1;i++)
{ max=i;
for (j=i+1; j<n ;j++)
{
if (arr[j] > arr[max])
{
max=j;
}
}
swap(&arr[i], &arr[max]);
}
printf("Sorted array is:\n");
for (int k=0; k<n; k++){
printf("%d\n",arr[k]);
}
return 0;
}
