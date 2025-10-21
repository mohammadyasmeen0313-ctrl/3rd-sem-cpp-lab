#include<iostream>
using namespace std;  
class parent
{  
public:  
parent()
 {  
cout<<"parent class construtor\n"<<endl;;  
} 
~parent() {  
cout<<"parent class destructor\n"<<endl;; 
} };  
class child :public parent
{
public:  
child() {  
cout<<"child class constructor\n"<<endl;;  
}  
~child() {  
cout<<"child class destructor\n"<<endl;  
} };  
int main()  
{  
cout<<"Roll No:24B11AI261"<<endl; 
child c; 
return 0; 
} 
