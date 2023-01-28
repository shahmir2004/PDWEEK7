#include<iostream>
using namespace std;

void steric(int rows);
main()
{

    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    steric(rows);




}

void steric(int rows)
{

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}