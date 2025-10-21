#include <iostream> 
#include <stdlib> 
using namespace std;  
int b = 50; 
namespace N1 
{  
int a = 80;  
} 
namespace N2 { 
int a = 2;  
} 

void fun()  
{  
int a = 2; 
system(“color  F0”);       
cout << "Fun A : " << a << " " << ::b << endl;
}  
int main() { 
cout  << "Roll No: 24B11AI261   " << endl;    
{    
int a = 2;          
cout << "Inner A : " << a << endl;    
}    
cout << "Outer B : " << b << endl;    
fun();  
cout <<  "Name space 1 : " << N1::a << endl;   
cout <<  "Name space 2 : " << N2::a << endl;    
return 0;    
}    
