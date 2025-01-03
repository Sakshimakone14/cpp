#include<iostream>
#include <cstring>
 using namespace std;
   class emp
     {
            public:
            int eno,sal;
            char name[10];
              void accept()
                 {
                        cout<<"Enter emp no name sal= ";
                            cin>>eno>>name>>sal;
                 }
              void disp()
                 {
                       cout<<"\nEnter emp no= "<<eno;
                       cout<<"\nEnter emp name= "<<name;
                       cout<<"\nEnter emp sal= "<<sal;  
                 }   
     };
  int main()
   {
       emp ob[100];
        int i,n,num,f=0;
        char sname[10];
         cout<<"Enter limit= ";
         cin>>n;
         for(i=0;i<n;i++)
           {
               ob[i].accept();
           }
        cout<<"Enter a name to search= ";
         cin>>sname;     
       for(i=0;i<n;i++)
          {
              if(strcmp(ob[i].name,sname)==0)
                {
                    ob[i].disp();
                    f=1;
                    break;
                }
          }
    if(f==0)
      cout<<"Record not found";          
   }   
