#include<iostream>
using namespace std;
    class MyDate
       {
             public:
             int dd,mm,yyyy;
             MyDate(int dd,int mm,int yyyy)
               {
                      this->dd=dd;
                      this->mm=mm;
                      this->yyyy=yyyy;
               }
            void disp()
              {
                    cout<<"Date as dd= "<<dd<<"-";                  
                   switch(mm)
                     {
                              case 1:cout<<"Jan";
                                     break;
                              case 2:cout<<"	Feb";
                                     break;
                              case 3:cout<<"March";
                                     break;
                              case 4:cout<<"Apr";
                                     break;
                              case 5:cout<<"May";
                                     break;
                              case 6:cout<<"June";
                                     break;    
                              case 7:cout<<"Jul";
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
                     cout<<"-";
                     cout<<yyyy; 
              }   
       };
 int main()
 {
      int dd,mm,yyyy;
      cout<<"Enter date as dd-mm-yyyy= ";
      cin>>dd>>mm>>yyyy;
      MyDate ob(dd,mm,yyyy);
      ob.disp();
 }      
