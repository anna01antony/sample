#include<iostream>
using namespace std;
# define SIZE 20
class stack
{
 int s[SIZE];
 int top;
 public:
        
        bool push(int);
        bool pop(int*);
        void status();
        stack()
        {
         top=-1;
        }
};
bool stack::push(int x)
{
 if(top< SIZE-1)
 {
  s[++top]=x;
  return 1;
 }
 else
 {
  return 0;
 }
}
bool stack::pop(int *x)
{
 if(top>-1)
 {
  *x=s[top--];
  return 1;
 }
 else
 {
  return 0;
 }
}
void stack::status()
{
 if(top>-1)
 {
  cout<<"NUMBER OF ELEMENTS="<<top+1<<"\n";
  if(top+1==SIZE)
  {
    cout<<"STACK FULL";
  }
  for(int i=0;i<=top;++i)
  {
	cout<<"ELEMENTS OF STACK:\n";
    cout<<s[i]<<"\n";
  }
  cout<<"\n";
 }
 else
 {
 cout<<"STACK EMPTY";
 }
}
int main()
{
 int choice,x;
 stack s;
 do
 {
  cout<<"1.PUSH"<<"\n"<<"2.POP"<<"\n"<<"3.STATUS"<<"\n";
  cin>>choice;
  switch(choice)
  {
   case 1:cout<<"ENTER ELEMENT: ";
          cin>>x;
          if(!s.push(x))
          {
           cout<<"STACK OVERFLOW";
          }
   break;
   case 2:if(!s.pop(&x))
          {
           cout<<"STACK UNDERFLOW";
          }
          else
          {
           cout<<"POPED ELEMENT"<<"\n"<<x<<"\n";
          }
   break;
   case 3:s.status();
   break;
   case 0:break;
   default:cout<<"INVALID\n";
   }
 }while(choice!=0);
 return 0;
}
          
          
          
   
   
  

