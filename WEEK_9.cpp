#include<iostream> 
using namespace std; 
class shape 
{ 
public: 
virtual void draw() 
{ 
cout<<"Draw a generic shape"<<endl;  }}; 
class circle:public shape 
{ 
public: 
void draw() override 
{ 
cout<<"Drawing a circle"<<endl; 
}}; 
class rectangle:public shape 
{ 
public: 
void draw() override 
{ 
cout<<"Drawing a rectangle"<<endl;  }}; 
class triangle:public shape 
{ 
public: 
void draw() override 
{ 
cout<<"Drawing a triangle"<<endl; }}; 
int main() 
{ 
shape* shapePtr; 
circle c; 
shapePtr=&c; 
shapePtr->draw(); 
rectangle r; 
shapePtr=&r; 
shapePtr->draw(); 
triangle t; 
shapePtr=&t; 
shapePtr->draw(); 
shape s; 
shapePtr=&s; 
shapePtr->draw(); 
return 0; 
} 
