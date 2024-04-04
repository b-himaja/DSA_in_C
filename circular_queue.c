#include <stdio.h>
void enqueue();
void dequeue();
void display();
int size=10, r=-1,f=-1, ch=0;
int q[10];
int isfull();
int isempty();
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
int isfull(){
if(f==((r+1)%size))
return 1;
return 0;
}
int isempty(){
if (f==-1)
return 1;
return 0;
}
void dequeue(){
if (isempty())
printf("Queue is empty\n");else{
printf("The deleted element is %d\n",q[f]);
if (f==r){
f=-1;
r=-1;
}
else{
f=(f+1)%size;
}
}
}
void enqueue(){
int x;
printf("Enter element ");
scanf("%d",&x);
if (isfull()){
printf("Queue is full\n");
}
else{
if (f==-1){
f=0;}
r=(r+1)%size;
q[r]=x;
}
}
void display(){
if (isempty()){
printf("Queue is empty\n");
}
else{
for (int i=f;i!= r;i=(i+1)%size) {
printf("%d\n ", q[i]);
}
printf("%d\n",q[r]);
}
}
