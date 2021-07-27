#include<iostream>
#include<string>
using namespace std;
class light{
    public:
double show();

};
class planet{
 public:
    string name;
    double diameter,distance,moon,ans;
    public:
    void get_planet_name()
    {
        cin>>name;
    }

    void get_no_of_moons()
    {
        cin>>moon;
    }
    void get_diameter()
    {
        cin>>diameter;
    }
    void get_distance_from_sun()
    {
        cin>>distance;
    }
    double show()
       {
           return (distance*1000000/186000);
       }
    friend light;

};
double show()
       {
           planet p;
             return p.distance*1000000/186000;
       }




main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        planet x;
        light k;
        x.get_planet_name();
        x.get_distance_from_sun();
        x.get_diameter();
        x.get_no_of_moons();
       cout<< x.show()<<endl;
    }
}
