
/*#include<iostream>
using namespace std;
  int main()
   {
        int i,j;
         for(i=4;i>0;i--)
          {
               for(j=1;j<=4;j++)
                 {
                    if(j>=i)
                     {
                         cout<<"*";
                     }
                  else
                    {
                        cout<<" ";
                    }   
                 }
               cout<<endl;  
          }    
   }
#include<iostream>
using namespace std;
  int main()
    {
        int a=0,b=1,c,i,n;
        cout<<"Enter limit= ";
        cin>>n;
        for(i=1;i<n-1;i++)
          {
                c=a+b;
                cout<<c<<endl;
                a=b;
                b=c;
          } 
    }
#include<iostream>
using namespace std;
  int main()
    {
          int a,b,i,sum,d,n;
          cout<<"Enter two interval= ";
          cin>>a>>b;
          for(i=a;i<=b;i++)
           {
                sum=0;
                n=i;
                while(n!=0)
                  {
                         d=n%10;
                         sum=sum+(d*d*d);
                         n=n/10;
                  }
       if(sum==i)
         {
            cout<<i<<endl;
         }        
           }
    }  
#include<iostream>
using namespace std;
  int main()
   {
        int n,i,f=0;
          cout<<"Enter number= ";
          cin>>n;
          for(i=2;i<=n;i++)
            {
                  if(n%i==0)
                    f=1;
                    break;
            }
        if(f==0)
          cout<<"Number is prime";
       else
         cout<<"Number is not prime";       
   }  
#include<iostream>
using namespace  std;
   int main()
     {
         int fact=1,i,n;
           cout<<"Enter number= ";
           cin>>n;
           for(i=1;i<=n;i++)
             {
                   fact=fact*i;
             }             
       cout<<"Factorial= "<<fact;
     }*/
