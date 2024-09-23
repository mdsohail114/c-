#include<iostream>
using namespace std;
int stack[20], n=20, top=-1;
void push(int val)
{
if(top>=n-1)
cout<<"stack overflow"<<endl;
else{ top++;
stack[top]=val;
}
}
void pop()
{
if(top<=-1)
cout<<"stack underflow"<<endl;else{
cout<<"the popped element is"<<stack[top]<<endl;
top--;	
}
}
void display(){ if(top>=0){
cout<<"stack elements are:"; for(int i=top;i>=0;i--)
cout<<stack[i]<<"";cout<<endl;	
}else
cout<<"stack is empty";
}
int main()
{
int ch, val;
cout<<"1)push in stack"<<end1;
cout<<"2)pop from stack"<<end1;
cout<<"3)display stack"<<end1;
cout<<"4)exit"<<end1;
do{
cout<<"enter choice:"<<endl;
cin>>ch;
switch(ch)
{
case1:
{
cout<<"enter value to be pushed:"<<endl;
cin>>val;
push(val);
break;	
}
case2:{pop(); break;
}
case3:{display(); break;
}
case4:
{
cout<<"exit"<<endl;
break;	
}
default:
{
cout<<"invalid choice"<<endl;	
}	
}	
}
while(ch!=4);
return 0;	
}
