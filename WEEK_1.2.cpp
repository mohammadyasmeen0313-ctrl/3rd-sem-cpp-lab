#include <iostream> 
#include <stdlib> 
using namespace std;   
void swapValues (int &first, int &second)  
{ 
int temp = first;  
first = second;  
second = temp;  
} 
int main() {  
system(“color F0”); 
cout << "Roll No: 24B11AI261" << endl;  
int a, b;  
cout << "Enter two numbers (a and b): ";  
cin >> a >> b;  
cout << "\nBefore Swapping:\n";  
cout << "a = " << a << endl;   
cout << "b = " << b << endl;  
swapValues(a, b);  
cout << "\nAfter Swapping:\n";  
cout << "a = " << a << endl;  
cout << "b = " << b << endl;  
return 0;  
} 
Output 
