#include <iostream>
using namespace std;

class complex {
  float real, imaginary;
  
  public:
  complex():real(0),imaginary(0) {}
  
  void input(){
      
      
      cout<<"enter real parts : ";
      cin>>real;
      cout<<"enter the imaginary part : ";
      cin>>imaginary;
  }
  
  complex operator +  (const complex obj)
  {
      complex temp;
      temp.real = real + obj.real;
      temp.imaginary = imaginary + obj.imaginary;
      return temp;
      
  }
  
 void output()
 {
    if(imaginary<0)
    cout<<"output complex number : "<<real<<"i";
    else 
    cout<<"\n\noutput complex number : "<<real<<"+" <<imaginary << "i";
    
    
 }
 
 complex operator * (const complex obj1)
 {
     complex temp1;
     temp1.real = (real*obj1.real);
     
     temp1.imaginary = (imaginary*obj1.imaginary);
     
     return temp1;
 }
 void output1()
 {
    if(imaginary<0)
    cout<<"Multiplication of  complex number : "<<real<<"i";
    else 
    cout<<"\n\nMultiplication of  complex number : "<<real<<"+" <<imaginary << "i";
    
    
 }
}; 
    
    
int main()
{
  complex complex1,complex2,result;
  cout<<"enter 1st complex number : \n";
  complex1.input();
  cout<< "\nenter 2nd complex number : \n";
  complex2.input();
  
  result = complex1 + complex2;
  result.output();
  
  
  result = complex1*complex2;
  result.output1();
  
}