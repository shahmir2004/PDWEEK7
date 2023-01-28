#include <iostream>
using namespace std;

void amplify(int number);
main()
{

    int num;
    cout<<"Enter number of iterations: ";
    cin>>num;

    amplify(num);

}

void amplify(int number)
{
    int x;
    for(int i=1; i<=number; i++)
    {
        x=i;   
        if(x%4==0)
        {
            x=x*10;
        }
        cout<<x<<" ";
        


    }


}
