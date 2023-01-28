#include<iostream>
using namespace std;

void triangle(int rows);
main()
{

    int rows;
    cout<<"Enter number of rows: ";
    cin>> rows;
    triangle(rows);

}

void triangle(int rows)
{
    int x=1;
    int y=1;
    for(int i=1; i<=rows; i++)
    {

        for(int j=1; j<=x; j++)
        {
            cout<<"*";
        }
        for(int k=(rows*2)-2; k>=y; k--)
        {
            cout<<" ";
        }
        for(int l=1; l<=x; l++)
        {
            cout<<"*";
        }
        cout<<endl;
        x=x+1;
        y=y+2;
    }
}