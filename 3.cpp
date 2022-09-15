#include<iostream>
using namespace std;
class complex
{
  private :
      int real , imag;
  public :
   void setval(int a, int b)
   { 
      real = a;
      imag = b;
   } 
   void display()
   {
      cout<<"\nReal : "<<real<<"  Imaginary : "<<imag<<endl;
      cout<<real<<" + "<<imag<<"i\n\n";
   } 
   void operator--()
   {
      real--;
      imag--;  
   }
 };
int main()
{
    complex c,d;
    c.setval(4,5);
    c.display();
    cout<<"******** After decreament the values becomes : ********"<<endl;
    --c;
    c.display();
      return 0;
}
