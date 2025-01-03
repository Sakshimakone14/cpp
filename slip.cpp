SLIP 1
Q1
#include<iostream>
using namespace std;
   class cal
    {
          public:
            void area(int r=2);
           void circumference(int r=2);  
    };
    void cal:: area(int r)
             {
                  int a;
                  a=3.14*r*r;
                  cout<<"Area of circle= "<<a<<endl;
             }
    void cal::circumference(int r)
             {
                  int c;
                  c=2*3.14*r*r;
                  cout<<"Circumference of circle= "<<c<<endl;
             }
      int main()
      {
          cal ob;
          ob.area(4);
          ob.circumference();
      } 
   Q2
#include<iostream>
using namespace std;
   class MyDate
    {
         int dd,mm,yy;
         public:
         MyDate(int dd,int mm,int yy)
          {
               this->dd=dd;
               this->mm=mm;
               this->yy=yy;
          }
        void disp()
         {
               cout<<dd<<"-";
               switch(mm)
                {
                    	case 1:cout<<"Jan";
                                break;
                       case 2:cout<<"Feb";
                                break;
                       case 3:cout<<"Mar";
                                break;
                       case 4:cout<<"April";
                                break;
                       case 5:cout<<"May";
                                break;
                      case 6:cout<<"June";
                                break;
                      case 7:cout<<"July";
                                break; 
                     case 8:cout<<"Aug";
                                break;
                     case 9:cout<<"Sep";
                                break;
                     case 10:cout<<"Oct";
                                break;
                    case 11:cout<<"Nov";
                                break;
                   case 12:cout<<"Dec";
                                break;                                                                                                                    
                }
              cout<<"-"<<yy;  
         }  
    };
    int main()
     {
          MyDate *ob=new Mydate(19,12,2024);
          ob.disp();          
     }
----------------------------------------------------------------------------------------------------------------------------------------------------------------------     
  SLIP 2
  Q1
  #include<iostream>
using namespace std;
   class shape
    {
        public:
          virtual void area()=0;
    };
  class circle:public shape
   {
         public: 
         int r,a;
         void area()
           {
              cout<<"Enter radius= ";
               cin>>r;           
               a=3.14*r*r;
               cout<<"Area of circle= "<<a<<endl;
            }    
   };  
  class rectangle:public shape
   {
         public: 
         int l,b,a;
         void area()
           {
               cout<<"Enter length and breadth= ";
               cin>>l>>b;
               a=l*b;
               cout<<"Area of rectangle= "<<a<<endl;
            }    
   }; 
  class triangle:public shape
   {
         public: 
         int l,b,a;
         void area()
           {  
               cout<<"Enter length and breadth= ";
               cin>>l>>b;
               a=0.5*(l+b);
               cout<<"Area of rectangle= "<<a<<endl;
            }    
   }; 
int main()
 {
     circle c;
     rectangle r;
     triangle t;
     c.area();
     r.area();
     t.area();       
 } 
 Q2
 #include<iostream>
#include<math.h>
using namespace std;
void power(int x,int y=2)
 {
      int  p;
      p=pow(x,y);
      cout<<"The power= "<<p;
 }
  int main()
   {
          power(4);
   } 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
SLIP 3
Q1
#include<iostream>
using namespace std;
class emp
 {
      int eno,sal;
      string name,des;
      public: 
         emp(int eno,string name,string des,int sal)
           {
                this->eno=eno;
                this->name=name;
                this->des=des;
                this->sal=sal;
           }
        void disp()
          {
               cout<<"Emp no="<<eno<<endl;
               cout<<"Emp name="<<name<<endl;
               cout<<"Emp designation="<<des<<endl;
               cout<<"Emp salary="<<sal<<endl;
          }  
       void maxsal(emp e1,emp e2)
         {
                if(e1.sal>e2.sal)
                  e1.disp();
               else
                  e2.disp();   
         }      
 };
 int main()
  {
     emp e1(101,"om","emp",2000);
     e1.disp();
     emp e2(102,"sai","manager",3000);
     e2.disp();
     cout<<"Employee with max salary= ";
     e1.maxsal(e1,e2);
  }
  Q2 
  #include<iostream>
using namespace std;
   int main()
    {
        int n,i,sum=0;
        cout<<"Enter the limit= ";
        cin>>n;
        for(i=1;i<=n;i++)
          {
              sum=sum+(i*i);
          }
       cout<<"Sum of series= "<<sum<<endl;   
    }
 -------------------------------------------------------------------------------------------------------------------------------------------------
 SLIP 4
 Q1 
 #include<iostream>
using namespace std;
   class customer
    {
           protected:
             int phno;
             string name;
           public:
             void accept()
               {
                      cout<<"Enter customer name and phone no= ";
                      cin>>name>>phno;
               };   
    };
 class depositer:public customer
  {
      protected:
            int ano,bal;
      public:
           void accept()
             {
                   cout<<"Enter account no balance= ";
                   cin>>ano>>bal;
             } 
  };
class borrower:public depositer
{
      protected:
           int lno,lamt;
      public:
           void accept()
             {
                customer::accept();
                depositer::accept();
                cout<<"Loan no and amount= ";
                cin>>lno>>lamt;
              }
            void disp()
             {
                 cout<<"Customer name= "<<name<<endl;
                 cout<<"Customer phone no= "<<phno<<endl;
                 cout<<"Customer account no= "<<ano<<endl;
                 cout<<"Customer balance= "<<bal<<endl;
                 cout<<"Customer loan no= "<<lno<<endl;
                 cout<<"Customer loan amount= "<<lamt<<endl;               
             }   
};
int main()
 {
        int i,n;
        cout<<"Enter limit= ";
        cin>>n;
       borrower b[20];
       for(i=0;i<n;i++)
        {
       b[i].accept();
         }
        for(i=0;i<n;i++)
        {  
       b[i].disp();
       }
 }  
 Q2
 #include<iostream>
using namespace std;
  void area(int r,int l)
   {
         int a;
         a=3.14*r*(r+l);
         cout<<"ARea of cone= "<<a<<endl;
   }
   void area(int r)
   {
         int a;
         a=4*3.14*r*r;
         cout<<"ARea of sphere= "<<a<<endl;   
   }
   void area(double r)
   {
         double a;
         a=3.14*r*r;
         cout<<"ARea of circle= "<<a<<endl;   
   }
 int main()
 {
     area(2,3);
     area(2);
     area(5);
 } 
---------------------------------------------------------------------------------------------------------------------------------------------------------- 
SLIP 5 
Q1 
#include<iostream>
using namespace std;
  class array2;
  class array1
   {
          int a[10],i,n;
            public:
            void accept()
              {
                      cout<<"Enter array1 limit=";
                      cin>>n;
                      for(i=0;i<n;i++)
                        {
                           cin>>a[i];
                        }
              }
            void disp()
             {
                 cout<<"Elements of array1= ";
                     for(i=0;i<n;i++)
                        {
                           cout<<a[i]<<endl;
                        }
             } 
             friend void max(array1,array2); 
   };
  class array2
   {
          int a[10],i,n;
            public:
            void accept()
              {
                      cout<<"Enter array2 limit=";
                      cin>>n;
                      for(i=0;i<n;i++)
                        {
                           cin>>a[i];
                        }
              }
            void disp()
             {
                 cout<<"Elements of array2= ";
                     for(i=0;i<n;i++)
                        {
                           cout<<a[i]<<endl;
                        }
             } 
             friend void max(array1,array2); 
   }; 
  void max(array1 a1,array2 a2)
   {
       int i,max=a1.a[0];
        for(i=0;i<a1.n;i++)
         {
             if(a1.a[i]>max)
               {
                   max=a1.a[i];
               }
         }
         cout<<"Maximum no from array1= "<<max<<endl;
          max=a2.a[0];
        for(i=0;i<a2.n;i++)
         {
             if(a2.a[i]>max)
               {
                   max=a2.a[i];
               }
         }
         cout<<"Maximum no from array2= "<<max<<endl;
   }
   int main()
   {
       array1 a1;
       array2 a2;
       a1.accept();
       a2.accept();
       a1.disp();
       a2.disp();
       max(a1,a2);
   }
 Q2
 #include<iostream>
using namespace std;
            int main()
              {
                       float *a=new float[20];
                       int i,n;
                      cout<<"Enter array limit=";
                      cin>>n;
                      for(i=0;i<n;i++)
                        {
                           cin>>a[i];
                        }
                 cout<<"The alternative elements= ";
                     for(i=0;i<n;i=i+2)
                        {
                           cout<<a[i]<<endl;
                        }                        
       } 
------------------------------------------------------------------------------------------------------------------------------------------------------------------
SLIP 6
Q1 
#include<iostream>
using namespace std;
  class Myarray
   {
             int *a,i,n;
             public:
                Myarray(int n)
                  {
                      this->n=n;
                      a=new int[n];
                      cout<<"Enter array elements= ";
                        for(i=0;i<n;i++)
                          {
                             cin>>a[i];
                          }
                  }
                void even()
                  {
                      cout<<"Even numvers= ";
                      for(i=0;i<n;i++)
                        {
                            if(a[i]%2==0)
                              {
                                 cout<<a[i]<<endl;
                              }
                        }
                  }  
                void odd()
                  {
                      cout<<"Odd numvers= ";
                      for(i=0;i<n;i++)
                        {
                            if(a[i]%2!=0)
                              {
                                 cout<<a[i]<<endl;
                              }
                        }
                  }    
   };
   int main()
    {
        Myarray ob(5);
        int i;
        ob.even();
        ob.odd();
    } 
 Q2
 #include<iostream>
using namespace std;
class B;
class A
{
       int a;
        public:
        void accept()
        {
          cout<<"Enter numbers= ";
          cin>>a; 
        }
        friend void max_min(A ,B );           
};
class B
{
       int b;
        public:
        void accept()
        {
          cout<<"Enter numbers= ";
          cin>>b; 
        }
        friend void max_min(A,B);           
};
void max_min(A m1,B m2)
 {
      if(m1.a>m2.b)
        cout<<m1.a<<" is max number and "<<m2.b<<"is minimum";
      else
         cout<<m2.b<<" is max number and "<<m1.a<<"is minimum";  
 }
int main()
 {
      A m1;
      B m2;
      m1.accept();
      m2.accept();
      max_min(m1,m2);
 }
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
SLIP  7
Q1
#include<iostream>
using namespace std;
   class MyNumber
    {
            int a,b,c;
              public:
                MyNumber()
                 {
                       a=10;
                       b=20;
                       c=30;
                 }
               MyNumber(int a,int b,int c)
                 {
                      this->a=a;
                      this->b=b;
                      this->c=c;
                 }  
               MyNumber(int a,int b,double c=30)
                {
                      this->a=a;
                      this->b=b;
                      this->c=c;
                }
               void avge()
                {
                   int a=(a+b+c)/3;
                   cout<<"Average= "<<a<<endl;
                }   
    };
   int main()
    {
         MyNumber ob;
         MyNumber ob1(12,11,5);
         MyNumber ob2(24,6);
         ob.avge();
         ob1.avge();
         ob2.avge();
    } 
Q2
    #include<iostream>
using namespace std;
int main()
 {
    int a,b;
    char ch;
    cout<<"Enter two numbers= ";
    cin>>a>>b;
    cout<<"MENU=1-addition \n 2-substraction \n 3-division \n 4-multiplication\n";
    cout<<"Enter your chioce= ";
    cin>>ch;
    switch(ch)
      {
         case '1': cout<<"Addition= "<<a+b;
                  break;
         case '2':cout<<"Substraction= "<<a-b;
                  break; 
        case '3':cout<<"Division= "<<a/b;
                  break; 
         case '4':cout<<"Multiplication= "<<a*b;
                  break;                          
      }
 }
--------------------------------------------------------------------------------------------------------------------------------------------------
SLIP 8
Q1 
#include<iostream>
using namespace std;
  class Mymatrix
   {
          int **a,i,m,n,j;
          public:
            Mymatrix(int m,int n)
             {
                      this->m=m;
                      this->n=n;
                      *a=new int[m];
                      for(i=0;i<m;i++)
                        {
                            a[i]=new int[n];
                        }
                      cout<<"Matrix elemnts= ";  
                     for(i=0;i<m;i++)
                      {
                           for(j=0;j<n;j++)
                             {
                                  cin>>a[i][j];
                             }
                      }           
             }
             void addition()
              {
                 int s=0;
                 cout<<"Addition of elements of matrix= ";
                  for(i=0;i<m;i++)
                      {
                           for(j=0;j<n;j++)
                             {
                                  s=s+a[i][j];
                             }
                      }
                      cout<<s;        
              }
   };
   int main()
    {
        int n,m;
        cout<<"Enter no of rows and columns= ";
        cin>>m>>n;
        Mymatrix m1(m,n);
        m1.addition();
    } 
  Q2
    #include<iostream>
using namespace std;
int main()
 {
    int a,b;
    char ch;
    cout<<"Enter two numbers= ";
    cin>>a>>b;
    cout<<"MENU=1-addition \n 2-substraction \n 3-division \n 4-multiplication\n";
    cout<<"Enter your chioce= ";
    cin>>ch;
    switch(ch)
      {
         case '1': cout<<"Addition= "<<a+b;
                  break;
         case '2':cout<<"Substraction= "<<a-b;
                  break; 
        case '3':cout<<"Division= "<<a/b;
                  break; 
         case '4':cout<<"Multiplication= "<<a*b;
                  break;                          
      }
 }
--------------------------------------------------------------------------------------------------------------------------------------------------
SLIP 9
Q1
#include<iostream>
using namespace std;
class Employee
{
    protected:
    string empcode;
    public:
    string ename;
};
class FullTime:public Employee
{
    
    int dailyRate,NOD,salary,total=0;
    public:
    void accept()
    {
        cout<<"Enter Empcode :";
        cin>>empcode;
        cout<<"Enter ename : ";
        cin>>ename;
        cout<<"Enter Daily rate :";
        cin>>dailyRate;
        cout<<"Enter No.of days : ";
        cin>>NOD;
        cout<<"Enter Salary of fulltime emp :";
        cin>>salary;
    }
    void display()
    {
        cout<<"Emp code = "<<empcode<<endl;
        cout<<"Emp name = "<<ename<<endl;
        cout<<"Daily rate = "<<dailyRate<<endl;
        cout<<"No of days = "<<NOD<<endl;
        cout<<"Salary = "<<salary<<endl;
    }
    int CalculateSalary()
    {
        total=salary+dailyRate*NOD;
        return total;
    }
};
class PartTime:public Employee
{
    int NOWH,hourlyrate,salary,total=0;
    public:
    void accept()
    {
        
        cout<<"Enter working hours:";
        cin>>NOWH;
        cout<<"Enter hourlyrate : ";
        cin>>hourlyrate;
        cout<<"Enter Salary of parttime :";
        cin>>salary;
        cout<<endl<<endl;
    }
    
    void display()
    {
        cout<<"Working hours = "<<NOWH<<endl;
        cout<<"Hourly rate   = "<<hourlyrate<<endl;
        cout<<"Salary        = "<<salary<<endl<<endl;
    }
    
    int CalculateSalary()
    {
        total=salary+hourlyrate*NOWH;
        return total;
    }
};
int main()
{
    int n,Ans=0,Final=0,flag=0;
    int ch;
    string srchEmp;
    FullTime f[50];
    PartTime p[50];
    do
    {
        cout<<"======MENU======\n\n";
        cout<<" 1.Accept and calculate salary\n\n";
        cout<<" 2.Display\n\n";
        cout<<" 3.Search\n\n";
        cout<<" 4.Exit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Enter no of employess : ";
            cin>>n;
            for(int i=0;i<n;i++)
            { 
                f[i].accept();
                p[i].accept();
                
            }
            for(int i=0;i<n;i++)
            {
                Final=Final+p[i].CalculateSalary();
                Ans=Ans+f[i].CalculateSalary();
           
            }
            cout<<"Total salary of Fulltime emp = "<<Ans<<endl;
            cout<<"Total salary of Parttime emp = "<<Final<<endl;
             break;
            
            
            case 2:
            cout<<"\n\nDetails of Parttime and fulltime employee \n\n";
            for(int i=0;i<n;i++)
            {
                p[i].display();
                f[i].display();
            }
            break;
            
            case 3:
            cout<<"\n\nSearch Parttime employee \n\n";
            cout<<"Enter employee name to search : ";
            cin>>srchEmp;
            for(int i=0;i<n;i++)
            {
                if(srchEmp==p[i].ename || srchEmp==f[i].ename)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"Employee is found \n";
            }
            else
            {
                cout<<"Employee not found \n";
            }
            break;
            
            case 4:
            cout<<"Exiting....\n";
            break;
        }
    }while(ch!=4);
    
}
Q2
#include<iostream>
#include<math.h>
using namespace std;
  int power(int x,int y=2)
   {
       int p=pow(x,y);
       cout<<"Power= "<<p;
       return 0;
   }
  int main()
  {
      power(3);
  } 
--------------------------------------------------------------------------------------------------------------------------------------------------------------
SLIP 10
#include<iostream>
using namespace std;
  class Distance
    {
         int feet,inches;
            public:
               void accept()
                {
                   cout<<"Enter feet and inches= ";
                   cin>>feet>>inches;
                }
               void disp()
                {
                     cout<<"Feet and inches= "<<feet<<" "<<inches<<endl;                     
                }
            Distance addition(Distance d1,Distance d2)
               {
                   Distance sum;
                   sum.feet=d1.feet+d2.feet;
                   sum.inches=d1.inches+d2.inches;
                   if(sum.inches>=12)
                     {
                         sum.feet=sum.feet+(sum.inches/12);
                         sum.inches=sum.inches%12;
                     }
                     return sum;
               }      
    };
   int main()
    {
       Distance d1,d2,d3;
       d1.accept();
       d2.accept();
       d1.disp();
       d2.disp();
       d3=d1.addition(d1,d2);
       d3.disp();
    } 
    Q2
    #include<iostream>
using namespace std;
void modify(int *a,int n)
 {
     int i;
     for(i=0;i<n;i++)
       {
           a[i]=a[i]+4;
       }
 }
  int main()
   {
        int a[20],i,n;
        cout<<"Enter limit= ";
        cin>>n;
        cout<<"Array elements= "<<endl;
          for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
        cout<<"Array elements= ";
          for(i=0;i<n;i++)
            {
               cout<<a[i]<<endl;
            }
          modify(a,n);
           cout<<"Modified array= "<<endl;
           for(i=0;i<n;i++)
             {
                 cout<<a[i]<<endl;
             }     
   }
--------------------------------------------------------------------------------------------------------------------------------------------------
SLIP  11
#include<iostream>
using namespace std;
   class customer
    {
           protected:
             int phno;
             string name;
           public:
             void accept()
               {
                      cout<<"Enter customer name and phone no= ";
                      cin>>name>>phno;
               };   
    };
 class depositer:public customer
  {
      protected:
            int ano,bal;
      public:
           void accept()
             {
                   cout<<"Enter account no balance= ";
                   cin>>ano>>bal;
             } 
  };
class borrower:public depositer
{
      protected:
           int lno,lamt;
      public:
           void accept()
             { customer::accept();
                depositer::accept();
                cout<<"Loan no and amount= ";
                cin>>lno>>lamt;
              }
            void disp()
             {
                 cout<<"Customer name= "<<name<<endl;
                 cout<<"Customer phone no= "<<phno<<endl;
                 cout<<"Customer account no= "<<ano<<endl;
                 cout<<"Customer balance= "<<bal<<endl;
                 cout<<"Customer loan no= "<<lno<<endl;
                 cout<<"Customer loan amount= "<<lamt<<endl;               
             }   
};
int main()
 {
        int i,n;
        cout<<"Enter limit= ";
        cin>>n;
       borrower b[20];
       for(i=0;i<n;i++)
        {
       b[i].accept();
         }
        for(i=0;i<n;i++)
        {  
       b[i].disp();
       }
 }  
 Q 2
#include<iostream>
using namespace std;
  inline int area(int l,int w)
   {
       return l*w;
   }
 inline int perimeter(int l,int b)
  {
      return 2*(l+b);
  }  
 int main()
  {
      cout<<"Area of rectangle= "<<area(2,3)<<endl;
      cout<<"Perimeter of rectangle= "<<perimeter(5,1)<<endl;
  } 
-------------------------------------------------------------------------------------------------------------------------------------------------------
SLIP 12 
Q1
#include<iostream>
using namespace std;
  class Mymatrix
   {
          int **a,i,m,n,j;
          public:
            Mymatrix(int m,int n)
             {
                      this->m=m;
                      this->n=n;
                      *a=new int[m];
                      for(i=0;i<m;i++)
                        {
                            a[i]=new int[n];
                        }
                      cout<<"Matrix elemnts= ";  
                     for(i=0;i<m;i++)
                      {
                           for(j=0;j<n;j++)
                             {
                                  cin>>a[i][j];
                             }
                      }           
             }
             void addition()
              {
                 int s=0;
                 cout<<"Addition of elements of matrix= ";
                  for(i=0;i<m;i++)
                      {
                           for(j=0;j<n;j++)
                             {
                                  s=s+a[i][j];
                             }
                      }
                      cout<<s;        
              }
              ~Mymatrix()
               {
                   cout<<"\nMemory is free";
               }
   };
   int main()
    {
        int n,m;
        cout<<"Enter no of rows and columns= ";
        cin>>m>>n;
        Mymatrix m1(m,n);
        m1.addition();
    } 
 Q2
 #include<iostream>
using namespace std;
   class stud
    {
          int rno;
          string name,class1;
          static int count;
            public:
              void accept()
               {
                  cout<<"Enter student roll no name and class=";
                  cin>>rno>>name>>class1;
                  count++;
               }
             void disp()
               {
                   cout<<"Student roll no="<<rno<<endl;
                   cout<<"Student name="<<name<<endl;
                   cout<<"Student class="<<class1<<endl;
               }
             static int scount()
              {
                   return count++;
              }  
    };
    int stud::count=0;
    int main()
     {
            int i,n;
            cout<<"Enter no of student= ";
            cin>>n; 
           stud s[n];
           for(i=0;i<n;i++)
             {
                  s[i].accept();
             }
           for(i=0;i<n;i++)
             {
                  s[i].disp();
             }
          cout<<"Number of student= "<<stud::scount();      
     }
----------------------------------------------------------------------------------------------------------------------------------------------------------------
SLIP 13
Q1
#include<iostream>
using namespace std;
  class Distance
    {
         int feet,inches;
            public:
               void accept()
                {
                   cout<<"Enter feet and inches= ";
                   cin>>feet>>inches;
                }
               void disp()
                {
                     cout<<"Feet and inches= "<<feet<<" "<<inches<<endl;                     
                }
            Distance addition(Distance d1,Distance d2)
               {
                   Distance sum;
                   sum.feet=d1.feet+d2.feet;
                   sum.inches=d1.inches+d2.inches;
                   if(sum.inches>=12)
                     {
                         sum.feet=sum.feet+(sum.inches/12);
                         sum.inches=sum.inches%12;
                     }
                     return sum;
               }      
    };
   int main()
    {
       Distance d1,d2,d3;
       d1.accept();
       d2.accept();
       d1.disp();
       d2.disp();
       d3=d1.addition(d1,d2);
       d3.disp();
    } 
   Q2
   #include<iostream>
using namespace std;
  int main()
   {
        int i,j;
        char ch='A';
        for(i=0;i<4;i++)
          {
            for(j=0;j<=i;j++)
              {
                 cout<<ch++<<"\t";
              }
              cout<<endl;
          }
   }
-------------------------------------------------------------------------------------------------------------------------------------------------------------
SLIP 14
Q1
#include<iostream>
using namespace std;
   class Personnel
    {
         protected:
           string name, address, email_id;
           int birth_date;
        public:
            void accept()
              {
                 cout<<"Enter personnel name address email-id birthdate= ";
                 cin>>name>>address>>email_id>>birth_date;
              }      
    };
    class Academic
    {
         protected:
           int m1,m2;
        public:
            void accept()
              {
                 cout<<"Enter Academic marks in 10th and 12th= ";
                 cin>>m1>>m2;
              }      
    };
  class biodata:public Personnel,public Academic  
   {
           public:
           void accept()
             {
                  Personnel::accept();
                  cout<<"Academic=";
                  Academic::accept();
               }   
              void disp()
                     {
                          cout<<"Personel name= "<<name<<endl;
                          cout<<"Personel address= "<<address<<endl;
                          cout<<"Personel email id= "<<email_id<<endl;
                          cout<<"Birth date= "<<birth_date<<endl;
                          cout<<"Marks obtain in 10 th= "<<m1<<endl;
                          cout<<"Marks obtain in 12th="<<m2<<endl;
                     }  
                };
  int main()
   {
       int i,n;
       cout<<"Enter limit= ";
       cin>>n;
       biodata b[n];
       for(i=0;i<n;i++)
         {
              b[i].accept();
         }
      for(i=0;i<n;i++)
         {
              b[i].disp();
         }   
   } 
 Q2
 #include<iostream>
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
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
SLIP  15
Q1
#include<iostream>
using namespace std;
 class Product
   {
       protected:
       int pid,price;
       string name;
          public:
            void accept()
             {
                  cout<<"Enter product id name price= ";
                  cin>>pid>>name>>price;
             }
   }; 
 class Discount:public Product
   {
        protected:
              int d,total=0,totald;
        public:      
              void accept()
               {
                  Product::accept();
                  cout<<"Enter dicount= ";
                  cin>>d;
               }
         public: 
         int tdiscount()
           {
                totald=(price*d)/100;
                cout<<"Total dicount= "<<totald;
                return totald;
           }       
         int tprice()
            {
                total=total+price;
               cout<<"Total price= "<<total<<endl;
               return total;
            }
           
   };  
   int main()
    {
        int i,n,total=0,discount=0;
        cout<<"Enter no of product= ";
        cin>>n;
        Discount d[n];
        for(i=0;i<n;i++)
          {
              d[i].accept();
          }
       for(i=0;i<n;i++)
         {
              total=total+d[i].tprice();
              discount=discount+d[i].tdiscount();
         }
         cout<<"\n total price= "<<total;
         cout<<"\nTotal discount= "<<discount;   
    }
  Q2
  #include<iostream>
using namespace std;
    class stud
     {
          int h;
            public:
              int accept()
                {
                     cout<<"Enter height of student= ";
                     cin>>h;
                     return h;
                }
     };
   int main()
    {
      int i,n,total=0,avg;
      stud s[20];
      cout<<"Enter number of student= ";
      cin>>n;
      for(i=0;i<n;i++)
        {
           total=total+s[i].accept();
        }
       avg=total/n;
       cout<<"Average= "<<avg; 
    }  
--------------------------------------------------------------------------------------------------------------------------------------                
SLIP 16
Q1
#include<iostream>
using namespace std;
  class cal
    {
         public:
         void area(int r=3);
         void circum(int r=4);
     };
  void cal::area(int r)
   {
        int a;
        a=3.14*r*r;
        cout<<"Area of circle= "<<a<<endl;
   }   
 void cal::circum(int r)
   {
        int c;
        c=2*3.14*r;
        cout<<"Circumference of circle= "<<c<<endl;
   }  
 int main()
  {
       cal c;
       c.area();
       c.circum(3);
  }  
  Q2
   #include<iostream>
using namespace std;
    class stud
     {
          int h;
            public:
              int accept()
                {
                     cout<<"Enter height of student= ";
                     cin>>h;
                     return h;
                }
     };
   int main()
    {
      int i,n,total=0,avg;
      stud s[20];
      cout<<"Enter number of student= ";
      cin>>n;
      for(i=0;i<n;i++)
        {
           total=total+s[i].accept();
        }
       avg=total/n;
       cout<<"Average= "<<avg; 
    }   
---------------------------------------------------------------------------------------------------------------------------------------------------------- 
SLIP 17
Q1
#include<iostream>
using namespace std;
  void area(int r,int l)
   {
         int a;
         a=3.14*r*(r+l);
         cout<<"ARea of cone= "<<a<<endl;
   }
   void area(int r)
   {
         int a;
         a=4*3.14*r*r;
         cout<<"ARea of sphere= "<<a<<endl;   
   }
   void area(double r)
   {
         double a;
         a=3.14*r*r;
         cout<<"ARea of circle= "<<a<<endl;   
   }
 int main()
 {
     area(2,3);
     area(2);
     area(5);
 } 
 Q2
#include<iostream>
 using namespace std;
   class B;
    class A
      {
                 public:
           int a=10;
           friend class B;
      };     
     class B
       {
           int b=20;
           A m;
           public:
            void mul(A m,B n)
              {
                 int multi=m.a*b;
                cout<<"Multiplication= "<<multi;  
              }
       }; 
     int main()
      {
          A m;
          B n;
          n.mul(m,n);
      }    
------------------------------------------------------------------------------------------------------------------------------------------------
SLIP 18
Q1
#include<iostream>
using namespace std;
 class Product
   {
       protected:
       int pid,price;
       string name;
          public:
            void accept()
             {
                  cout<<"Enter product id name price= ";
                  cin>>pid>>name>>price;
             }
   }; 
 class Discount:public Product
   {
        protected:
              int d,total=0,totald;
        public:      
              void accept()
               {
                  Product::accept();
                  cout<<"Enter dicount= ";
                  cin>>d;
               }
         public: 
         int tdiscount()
           {
                totald=(price*d)/100;
                cout<<"Total dicount= "<<totald;
                return totald;
           }       
         int tprice()
            {
                total=total+price;
               cout<<"Total price= "<<total<<endl;
               return total;
            }
           
   };  
   int main()
    {
        int i,n,total=0,discount=0;
        cout<<"Enter no of product= ";
        cin>>n;
        Discount d[n];
        for(i=0;i<n;i++)
          {
              d[i].accept();
          }
       for(i=0;i<n;i++)
         {
              total=total+d[i].tprice();
              discount=discount+d[i].tdiscount();
         }
         cout<<"\n total price= "<<total;
         cout<<"\nTotal discount= "<<discount;   
    }
 Q2
  #include<iostream>
using namespace std;
            int main()
              {
                       int  a[20],i,n;
                      cout<<"Enter array limit=";
                      cin>>n;
                      for(i=0;i<n;i++)
                        {
                           cin>>a[i];
                        }
                 cout<<"The alternative elements= ";
                     for(i=0;i<n;i=i+2)
                        {
                           cout<<a[i]<<endl;
                        }                        
       }
------------------------------------------------------------------------------------------------------------------------------------------------------------------------        
SLIP 19
Q1
#include<iostream>
using namespace std;
  class array2;
  class array1
   {
          int a[10],i,n;
            public:
            void accept()
              {
                      cout<<"Enter array1 limit=";
                      cin>>n;
                      for(i=0;i<n;i++)
                        {
                           cin>>a[i];
                        }
              }
            void disp()
             {
                 cout<<"Elements of array1= ";
                     for(i=0;i<n;i++)
                        {
                           cout<<a[i]<<endl;
                        }
             } 
             friend void max(array1,array2); 
   };
  class array2
   {
          int a[10],i,n;
            public:
            void accept()
              {
                      cout<<"Enter array2 limit=";
                      cin>>n;
                      for(i=0;i<n;i++)
                        {
                           cin>>a[i];
                        }
              }
            void disp()
             {
                 cout<<"Elements of array2= ";
                     for(i=0;i<n;i++)
                        {
                           cout<<a[i]<<endl;
                        }
             } 
             friend void max(array1,array2); 
   }; 
  void max(array1 a1,array2 a2)
   {
       int i,max=a1.a[0];
        for(i=0;i<a1.n;i++)
         {
             if(a1.a[i]>max)
               {
                   max=a1.a[i];
               }
         }
         cout<<"Maximum no from array1= "<<max<<endl;
          max=a2.a[0];
        for(i=0;i<a2.n;i++)
         {
             if(a2.a[i]>max)
               {
                   max=a2.a[i];
               }
         }
         cout<<"Maximum no from array2= "<<max<<endl;
   }
   int main()
   {
       array1 a1;
       array2 a2;
       a1.accept();
       a2.accept();
       a1.disp();
       a2.disp();
       max(a1,a2);
   }
   Q2
#include<iostream>
 using namespace std;
   int main()
    {
       int ano,cno,bal,dep;
       string name,add;
       cout<<"Enter bank account ano name address contact no balance= ";
        cin>>ano>>name>>add>>cno>>bal;
         cout<<"Enter deposite= ";
         cin>>dep;
       cout<<"Account no= "<<ano<<endl; 
       cout<<"Account name= "<<name<<endl; 
       cout<<"Account address= "<<add<<endl; 
       cout<<"Account contact no= "<<cno<<endl;
       cout<<"Account no= "<<bal<<endl; 
        bal=bal+dep;
         cout<<"Account no= "<<ano<<endl; 
       cout<<"Account name= "<<name<<endl; 
       cout<<"Account address= "<<add<<endl; 
       cout<<"Account contact no= "<<cno<<endl;
        cout<<"Modified array= "<<bal;
    }  
--------------------------------------------------------------------------------------------------------------------------------------------------
SLIP 20
Q1
#include<iostream>
 using namespace std;
 class product
  {
               public:
       int pid,price;
       string name;
            void accept()
              {
                     cout<<"Enter product pid name and price= ";
                     cin>>pid>>name>>price;
              }
            void disp()
              {
                   cout<<"Product id= "<<pid<<endl;
                   cout<<"Product name= "<<name<<endl;
                   cout<<"Product price= "<<price<<endl;
              } 
  };
 int main()
  {
     int i,n,max,k=0;
     cout<<"Enter number of product= ";
     cin>>n;
       product *p=new product[n];
       for(i=0;i<n;i++)
        {
            p[i].accept();
        }
        for(i=0;i<n;i++)
        {
            p[i].disp();
        }
        max=p[0].price;
        for(i=0;i<n;i++)
          {
                if(p[i].price>max)
                  {
                    max=p[i].price;
                    k=i;
                  }  
          }
          cout<<"Product with max sal=";
          p[k].disp();
  } 
Q2
#include<iostream>
using namespace std;
  void area(int r,int l)
   {
         int a;
         a=3.14*r*(r+l);
         cout<<"ARea of cone= "<<a<<endl;
   }
   void area(int r)
   {
         int a;
         a=4*3.14*r*r;
         cout<<"ARea of sphere= "<<a<<endl;   
   }
   void area(double r)
   {
         double a;
         a=3.14*r*r;
         cout<<"ARea of circle= "<<a<<endl;   
   }
 int main()
 {
     area(2,3);
     area(2);
     area(5);
 }                   
