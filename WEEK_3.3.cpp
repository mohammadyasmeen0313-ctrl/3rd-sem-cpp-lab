#include <iostream> 
using namespace std;  
class Student {  
private:  
string name;  
int rollNumber;  
float marks;  
public:  
Student() {  
name = “”;  
rollNumber = 0;  
marks = 0.0;     
void setDetails(string name, int rollNumber, float marks)  
{  
this->name = name;  
this->rollNumber = rollNumber;  
this->marks = marks;  
}  
Student& updateName(string name) {  
this->name = name;  
return *this;  
}  
Student& updateMarks(float marks)  
{ this->marks = marks;  
return *this; 
}  
void display() {  
cout << “\n--- Student Record ---\n”;  
cout << “Name : “ << name << endl;  
cout << “Roll No. : “ << rollNumber << endl;  
cout << “Marks : “ << marks << “/100\n”;  
} 
};
int main() {
    Student s1;
    s1.setDetails("yasmeen", 54, 95);
    s1.updateName("Yasmeen").updateMarks(98);
    s1.display();

    return 0;
}
