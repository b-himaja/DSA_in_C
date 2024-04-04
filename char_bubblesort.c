#include <stdio.h>
void swap(char* p1, char* p2)
{
char temp = *p1;
*p1 = *p2;
*p2 = temp;
}
int main(){
int n,i,j;
printf("Enter the number of elements to be sorted ");
scanf("%d",&n);
char arr[n];
printf("Enter the elements ");
scanf("%s",arr);
for (i = 0;i<n-1;i++){for (j=0;j<n-i-1;j++)
{if (arr[j] > arr[j + 1])
{swap(&arr[j], &arr[j + 1]);
}
}
}
printf("Sorted array is:\n");
for (int k=0; k<n; k++){
printf("%c\n",arr[k]);
}
return 0;
}
