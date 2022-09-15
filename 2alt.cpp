#include<iostream>
using namespace std;
class complex
{
    int real1,real2;
    int ima1,ima2;
    public :
    int x1,y1;
 
    void setdata()
    {
        cout<<"Enter real and imaginary part of first complex numbers : ";
       cin>>x1>>y1;
    }
    void display()
    {
         cout<<"First Complex number is : "<<x1<<" + "<<y1<<"i"<<endl;
         
    }
    
     complex add(complex &c1,complex &c2)
      {complex c3;
           
            c3.x1=c1.x1+c2.x1;
            c3.y1=c1.y1+c2.y1;
            return c3;
    }
        
    
   };
    
    
    int main()
    {
    complex c,d,e;
    c.setdata();
    d.setdata();
    e=e.add(c,d);
    e.display();
  /*
    c.add(d);
    c.display();
    c.add();
    */
    return 0;
    }
