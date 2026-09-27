#include<iostream>
using namespace std;
int main(){
  int marks[5];
int sum=0;
cout<<"Enter marks for 5 students: "<<endl;
for(int i=0;i<5;oi++)
{
    cin>>marks[i];
}
cout<<"marks are: "<<endl;
for(int i=0;i<5;i++)
{
cout<<marks[i]<<" ";
sum=sum+marks[i];
}
cout<<"Total marks= "<<sum<<endl;

return 0;
}
