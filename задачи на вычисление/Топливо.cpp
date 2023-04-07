#include <iostream>
using namespace std;
int main ()
{
    double s, t, F, v, p;
    cout<<"enter the distance traveled and the trip time\n";
    cin>>s>>t;
    cout<<"fuel amount: ";
    cin>>F;

    v=s/t;
    p=(F/s)*100;
    cout<<"average speed s = "<<v<< endl;
    cout<<"fuel consumption per 100 km p = "<<p;

    return 0;
}
