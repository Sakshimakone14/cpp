#include<iostream>
using namespace std;
   inline int per_increament(int n)
      {
            return ++n;
      }
  inline int per_decreament(int n)
     {
              return --n;
     }
 int main()
    {
           int n;
           cout<<"Enter number= ";
           cin>>n;
           cout<<"Pre-increament= "<<per_increament(n)<<endl;
           cout<<"Pre-decreament= "<<per_decreament(n)<<endl;
    }
    /*
    #include<iostream>
using namespace std;
  inline int squ(int n)
     {
           return n*n;
     }
int main()
    {
             int n;
             cout<<"Enter number= ";
             cin>>n;
             cout<<"Square of number= "<<squ(n); 
    }
     
 #include<iostream>
using namespace std;
    inline int check(int n)
   {
        return n%2==0?1:0;
   }    
 int main()
{
      int n;
      cout<<"Enter number= ";
      cin>>n;
      if(check(n))
        {
           cout<<"Even number";
        } 
     else
        {
           cout<<"Odd number";
        }   
} 
  
#include<iostream>
using namespace std;
   inline float add(float a,float b)
      {
            return a+b;
      }
   inline float sub(float a,float b)
      {
             return a-b;
      }   
  inline float mul(float a,float b)
      {
            return a*b;
      }    
  inline float div(float a,float b) 
      {
            return a/b;
      }    
 int main()
   {
           float a,b;
           cout<<"Enter two numbers= ";
           cin>>a>>b;
           cout<<"addition= "<< add(a,b)<<endl;
           cout<<"substraction= "<< sub(a,b)<<endl;
           cout<<"Multiplication= "<< mul(a,b)<<endl;
           cout<<"division= "<< div(a,b)<<endl;
   } 
   
  #include<iostream>
using namespace std;
inline int area_rect(int l,int w)
   {
            return l*w;
   }
inline int peri_rect(int l,int w)
   {
            return 2*(l+w);
   }   
  int main()
  {
         int l,w;
         cout<<"Enter length and width of rectangle= ";
         cin>>l>>w;
         cout<<"Area of rectangle= "<<area_rect(l,w)<<endl; 
         cout<<"Perimeter of rectangle= "<<peri_rect(l,w)<<endl; 
  }                      
