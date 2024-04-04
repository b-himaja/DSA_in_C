#include <stdio.h>
void pop();
void push();
void display();
int size=10, top=-1, ch=0;
int stack[10];
int main()
{
while(ch!=4){
printf("Enter your choice: 1.Push 2.Pop 3.Display 4.Exit ");
scanf("%d",&ch);
switch(ch){
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("Invalid input\n");
break;
}
}
return 0;
}
void pop(){
if (top==-1){
printf("Stack is empty\n");
}
else{
top-=1;
}
}
void push(){
int x;
printf("Enter element ");scanf("%d",&x);
if (top==size-1){
printf("Stack overflow\n");
}
else{
top+=1;
stack[top]=x;
}
}
void display(){
if (top==-1){
printf("Stack is empty\n");
}
else{
for (int i=top;i>=0;i--){
printf("%d\n",stack[i]);
}
}
}
