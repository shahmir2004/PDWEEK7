#include <iostream>
using namespace std;

int triangle(int number);
main()
{
    int number;
    int answer;
    cout<<"Enter number: ";
    cin>>number;

    answer=triangle(number);
    cout<<answer;
}

int triangle(int number)
{

    
    int y=0;
    for(int i=1; i<=number; i++)
    {
        y=y+i;
        
    }    


    return y;


}