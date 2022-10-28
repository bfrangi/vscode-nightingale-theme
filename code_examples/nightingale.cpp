#include <iostream>
using namespace std;

const string ACTIVE_TIME = "Night (10 p.m. to 7 a.m.)";

class Nightingale
{
public:
    string name = "Common Nightingale";
    string scientific_name = "Luscinia megarhynchos";
    string population_status = "stable";
    int average_mass = 20; // g
    string active_time = ACTIVE_TIME;

public:
    void printDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Scientific Name : " << scientific_name << endl;
        cout << "Average Mass : " << average_mass << 'g' << endl;
        cout << "Population Status : " << population_status << endl;
        cout << "Active Time : " << active_time << endl;
    }
    
    void sing()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "Coding..." << endl;
        }
    }
};

int main()
{
    Nightingale nightingale;
    nightingale.sing();
    nightingale.printDetails();
}



