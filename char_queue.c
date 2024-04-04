#include <stdio.h>
void enqueue();
void dequeue();
void display();
int size=10, r=-1,f=-1, ch=0;
char q[10];
int main()
{
while(ch!=4){
printf("Enter your choice: 1.enqueue 2.dequeue 3.display 4.exit ");
scanf("%d",&ch);
switch(ch){
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();break;
case 4:
break;
default:
printf("Invalid input\n");
break;
}
}
return 0;
}
void dequeue(){
if (f==-1){
printf("Queue is empty\n");
}
else{
if (f==r){
printf("The deleted element is %c\n",q[f]);
f=-1;
r=-1;
}
else {
printf("The deleted element is %c\n",q[f]);
for (int i=f+1; i<=r; i++){
q[i-1]=q[i];
}
r-=1;
}
}
}
void enqueue(){
char x;
printf("Enter element ");
scanf("%s",&x);
if (r>=size-1){
printf("Queue is full\n");
}
else{
if (f==-1){
f=0;
r=0;
q[r]=x;
}else{
r+=1;
q[r]=x;
}
}
}
void display(){
if (f==-1){
printf("Queue is empty\n");
}
else{
for (int i=f;i<=r;i++){
printf("%c\n",q[i]);
}
}
}
