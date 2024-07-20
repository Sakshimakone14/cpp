 using namespace std;
 #include<iostream>
 #include <cstring>
    class emp
      {
           public:
             int eno ,sal;
             char ename[10];
                 void accept(int eno,char ename[10],int sal)
                   {
                          this->eno=eno;
                          strcpy(this->ename,ename);
                          this->sal=sal;
                   }
                 void disp()
                   {
                        cout<<"Enter emp no= "<<eno<<endl;
                        cout<<"Enter emp name= "<<ename<<endl;
                        cout<<"Enter emp sal= "<<sal;
                   }  
      };
   int main()
     {
          emp ob;
          int eno,sal;
          char ename[10];
            cout<<"Enter emp no name sal= ";
              cin>>eno>>ename>>sal;
          ob.accept(eno,ename,sal);
          ob.disp();    
     }   
