#include <iostream>
using namespace std;
void upper(int rows);
void lower(int rows);
main()


{
    int rows;
    cin>>rows;

    upper(rows);
    lower(rows);


}


void upper(int rows)
{

    int columns=rows/2;
    int j=0;

    for(int i=columns; i>0; i=i-1)
    {
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(int b=j; b<=columns; b++)
        {
            cout<<"*";
        }
        cout<<endl;



    }




}

void lower(int rows)
{
    int columns=rows/2;
    int x=1;
    int y=rows;
    

    for(int i=columns; i>0; i=i-1)
    {
       for(int j=1; j<x; j=j+1)
        {
            cout<<" ";
        }
        for(int b=i; b>0; b=b-1)
        {
            cout<<"*";
        } 
        cout<<endl;
        x=x+1;
        
        
    }
}
