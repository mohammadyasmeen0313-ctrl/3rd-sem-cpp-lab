#include<iostream>  
using namespace std;  
class vehicle{  
public:  
vehicle(){  
cout<<"This is a vehicle"<<endl; 
}  };  
class car : public vehicle  
{  
public: car(){  
cout<<"This vehicle is a car"<<endl;  
} };  
int main()  
{  
cout<<"Roll No:25B21AI054"<<endl;  
Programming with C++ Lab                   
                                                                  P age 
No.:                    
Date:  
car obj;  
return 0;  
}  

//Multiple Inheritance

#include<iostream>  
using namespace std;  
class landvehicle{   
public:  
landvehicle(){  
cout<<"This is a land vehicle"<<endl;  
}  };  
class watervehicle{  
public:  
watervehicle(){  
cout<<"This is a water vehicle"<<endl;  
} };  
class amphibiousvehicle:public watervehicle,public landvehicle{  
public: 
amphibiousvehicle(){  
Roll No.:  
cout<<"This is an both land and water vehicle"<<endl;  
} };  
int main(){   
cout<<"Roll No:25B21AI054"<<endl; 
amphibiousvehicle obj;  
return 0;  
}  

//Multilevel Inheritance:
#include<iostream>   
using namespace std;  
class vehicle{  
public:  
vehicle(){  
cout<<"This is a vehicle"<<endl; 
} };  
class fourwheeler:public vehicle{ 
public:  
fourwheeler(){  
cout<<"4 wheeler vehicles"<<endl;  
} };  
class car:public fourwheeler{  
public: car(){  
cout<<"This 4 wheeler vehicle is a car";  
} };  
int main(){  
cout<<"Roll No:24B11AI261"<<endl;  
car obj;  
return 0;  
}   

//Hierarchical Inheritance

#include<iostream> using 
namespace std; class vehicle{ 
public: vehicle(){  
cout<<"This is a vehicle"<< endl;  
} };  
class car : public vehicle{  
public:  
car(){  
cout<<"This vehicle is a car"<< endl;  
} };  
class bus : public vehicle{  
public:  
bus(){  
cout<<"This vehicle is bus"<< endl;  
} };  
int main() 
{  
cout<<"Roll No:24B11AI261"<<endl; 
car obj1;  
bus obj2;  
} 

//Hybrid Inheritance:

#include<iostream>   
using namespace std;   
class vehicle{  
public:  
vehicle(){  
cout<<"this is a vehicle"<<endl;  
} };  
class fare{  
public: fare(){  
cout<<"fare of a vehicle"<<endl;  
} };  
class car:public vehicle{  
public:  
car(){  
cout<<"this vehicle is a car"<<endl;  
} };  
class bus: public vehicle, public fare{  
public:  
bus(){  
cout<<"this vehicle is a bus with fare"<<endl;  
} };  
int main()  
{  
cout<<"Roll No:24B11AI261"<<endl; 
bus obj2;  
}  
