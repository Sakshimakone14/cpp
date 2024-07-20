using namespace std;
#include<iostream>
   class power
      {
           public:
              void pow(int x,int y=2)
                 {
                       int p=1;
                       for(int i=1;i<=y;i++)
                          {
                              p=p*x;
                          }
                          cout<<"Power= "<<p;
                 }
      }; 
   int main()
     {
           power ob;
           ob.pow(2,2);
     }   
