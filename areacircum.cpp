#include<iostream>
using namespace std;
     class demo
       {
            public:
               void area(float r=13.8)
                  {
                      float a=3.14*r*r;
                       cout<<"Area of circle= "<<a<<endl;
                  }
              void circum(float r=17.1)
                 {
                     float c=2*3.14*r;
                     cout<<"Circumference of circle= "<<c<<endl;
                 }    
       };
    int main()
     {
          demo ob;
          ob.area(3.2);
          ob.circum(8.1);
     }  
