#include <iostream>
using namespace std;

void checkPercentage(int countnumber);
main()
{
    int number;
    cout<<"Enter numbers to be checked: ";
    cin>>number;
    checkPercentage(number);

}

void checkPercentage(int countnumber)
{

    
    float buffer1=0;
    float buffer2=0;
    float buffer3=0;
    float p1,p2,p3;
    int number;

    for(int i=1; i<=countnumber; i++)
    {
        cout<<"Enter number "<<i<<" : ";
        cin>>number;
        if(number%2==0)
        {
            buffer1=buffer1+1;
        }
        if(number%3==0)
        {
            buffer2=buffer2+1;
        }
        if(number%4==0)
        {
            buffer3=buffer3+1;
        }
    }

    p1=(buffer1/countnumber)*100;
    p2=(buffer2/countnumber)*100;
    p3=(buffer3/countnumber)*100;

    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%"<<endl;
    
}