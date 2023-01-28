#include <iostream>
using namespace std;

void reversetriangle(int rows);
main()
{

    int rows;
    cout<<"Enter number of rows you want: ";
    cin>>rows;
    reversetriangle(rows);
}

void reversetriangle(int rows)
{

    for (int i=rows; i>=1; i=i-1)
    {
        for(int j=i; j>=1; j=j-1)
        {
            cout<<"*";
        }
        cout<<endl;


    }


}