using namespace std;
   #include<iostream>
   #include <cstring>
      class collage
        {
             public:
             int cid,year;
             char cname[20],univ[20];
               void accept()
                 {
                       cout<<"Enter collage id name university year= ";
                           cin>>cid>>cname>>univ>>year;
                 } 
              void search(collage ob[10],char university[10],int n)
                 {
                       int i;
                        for(i=0;i<n;i++)
                          {
                              if(strcmp(ob[i].univ,university)==0)
                               {
                                cout<<"\nEnter collage id="<<ob[i].cid;
                                cout<<"\nEnter collage name="<<ob[i].cname;
                                cout<<"\nEnter collage year="<<ob[i].year;
                              }  
                          }
                 }
              void search(collage ob[], int y, int n) 
              {
        for (int i = 0; i < n; i++) 
        {
            if (ob[i].year == y)
             {
                cout << "\nCollege id: " << ob[i].cid;
                cout << "\nCollege name: " << ob[i].cname;
                cout << "\nCollege university: " << ob[i].univ << endl;
            }
        }
    }
        };
    int main()
      {
          collage ob[100],obj;
           char university[10];
           int y,i,n;
             cout<<"Enter limit= ";
             cin>>n;
              for(i=0;i<n;i++)
                {
                     ob[i].accept();
                }
             cout<<"\nEnter university name to search= ";
             cin>>university;
             obj.search(ob,university,n);   
             cout<<"\nEnter year to search= ";
             cin>>y;
             obj.search(ob,y,n);   
           
      }    
