#include <iostream>
using namespace std;

void treatedPatients(int days);
main()
{
    int days;
    cout<<"Enter number of days you want calculations for: ";
    cin>>days;

    treatedPatients(days);
}

void treatedPatients(int days)
{
    int patients;
    int doctors=7;
    int treatedpatients=0;
    int untreatedpatients=0;
    

    for(int i=1; i<=days; i++)
    {
        cout<<"Enter number of patients on day:"<<i<<" ";
        cin>>patients;
        
        if(i%3==0 && untreatedpatients>treatedpatients)
        {
            doctors=doctors+1;
        }
        
        if(patients<=doctors)
        {
            treatedpatients=treatedpatients+patients;
        }
        if(patients>doctors)
        {
            treatedpatients=treatedpatients+doctors;
            untreatedpatients=untreatedpatients+(patients-doctors);
        }
        
    }
    cout<<"Treated patients: "<<treatedpatients<<endl;
    cout<<"Untreated patients: "<<untreatedpatients;


}