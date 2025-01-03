using namespace std;
#include<iostream>
class BankAccount
   {
          public:
          int acc_no,bal,amount;
          char acc_name[10],addr[10];
          long long con_no;
       void accept()
         {
               cout<<"Enter account no, name, address, balance and contact no= ";
               cin>>acc_no>>acc_name>>addr>>bal>>con_no;
         }   
      void disp()
         {
               cout<<"Enter account no= "<<acc_no<<endl;
               cout<<"Enter account name= "<<acc_name<<endl;
               cout<<"Enter address= "<<addr<<endl;
               cout<<"Enter account balance= "<<bal<<endl;
               cout<<"Enter contact no= "<<con_no<<endl;
         }
      void deposite()
         {
             cout<<"Enter amount to deposite= ";
             cin>>amount;
             bal=bal+amount;
             cout<<"Deposite success..........";
         }       
   };
 int main()
    {
        BankAccount ob;
        ob.accept();
         ob.disp();
         ob.deposite();
         ob.disp();
    } 
