#include <iostream>
using namespace std;

void transportCost(int cargonumber);
main()
{

    int cargonumber;
    cout<<"Enter number of cargo to be transported: ";
    cin>>cargonumber;

    transportCost(cargonumber);

}

void transportCost(int cargonumber)
{
    int tonnage;
    int totaltonnage=0;
    float buscount=0;
    float truckcount=0;
    float traincount=0;
    float buspercent,trainpercent,truckpercent;
    float avgprice;


    for(int i=1; i<=cargonumber; i++)
    {
        cout<<"Enter tonnage of cargo number "<<i<<" : ";
        cin>>tonnage;
        if(tonnage<=3)
        {
            buscount=buscount+tonnage;
        }
        else if(tonnage>3 && tonnage<=11)
        {
            truckcount=truckcount+tonnage;
        }
        else if(tonnage>11)
        {
            traincount=traincount+tonnage;
        }
        totaltonnage=totaltonnage+tonnage;

    }

    buspercent=(buscount/totaltonnage)*100.0;
    truckpercent=(truckcount/totaltonnage)*100.0;
    trainpercent=(traincount/totaltonnage)*100.0;
    avgprice=((buscount*200)+(truckcount*175)+(traincount*120))/totaltonnage;

    cout<<avgprice<<endl;
    cout<<buspercent<<endl;
    cout<<truckpercent<<endl;
    cout<<trainpercent<<endl;

}