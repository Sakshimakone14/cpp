#include<iostream>
 using namespace std;
    void sort(int a[],int n)
      {
           int pass,i,t;
             for(pass=1;pass<n;pass++)
                {
                   for(i=0;i<n-pass;i++)
                      {
                           if (a[i] > a[i + 1]) 
                           {
                                  t = a[i];
                                 a[i] = a[i + 1];
                                 a[i + 1] = t;
            }
                      }
                }
             cout<<"\nAscending order= ";
                              for(i=0;i<n;i++)
                                {
                                     cout<<a[i]<<endl;
                                }   
      }
   void sort(float b[],int n)
     {
           int pass,i,t;
             for(pass=1;pass<n;pass++)
                {
                   for(i=0;i<n-pass;i++)
                      {
                           if (b[i] > b[i + 1])
                            {
                                t = b[i];
                               b[i] = b[i + 1];
                               b[i + 1] = t;
                          }
                      }
                }
                           cout<<"\nAscending order= ";
                              for(i=0;i<n;i++)
                                {
                                     cout<<b[i]<<endl;
                                }      
     }
   int main()
    {
       int a[]={11,88,77,10,55,15};
       float b[]={12.1,17.3,8.1,13.8,99.2};
       sort(a,6);
       sort(b,5);  
    }      
