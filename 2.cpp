#include<iostream>
using namespace std;
class complex
{
    int real1=1;
    int ima1=1;
    public :
     complex()
    { 
       real1=10;
       ima1=5;
    }
    void display()
    {
         cout<<"First Complex number is : "<<real1<<" + "<<ima1<<"i"<<endl;
       
    }
 
        
    
   };
    
    
    int main()
    {
    complex c;
    c.display();
 
    
    return 0;
    }
