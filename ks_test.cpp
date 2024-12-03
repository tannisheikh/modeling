#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<double>v;
    cout << "How many number do you want to renerated?";
    int number;
    cin >> number;

    cout << number << " data insert :";
    for(int i = 0; i < number; i++)
    {
        double x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    sort(v.begin(), v.end());

    cout << "After sorting data : ";
    for(int i = 0; i < number; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<double>in;

    for(int i = 0; i < number; i++)
    {
        double y = (i+1.0)/number;
        in.push_back(y);
    }
    cout << "Result of i/n : ";
    for(int i = 0; i < number; i++)
    {
        cout << in[i] << " ";
    }
    cout << endl;

    vector<double>Dpos;
    cout << "Result of D+ : ";
    for(int i = 0; i < number;i++)
    {
        double z = in[i] - v[i];
        Dpos.push_back(z);
    }
    for(int i = 0; i < number;i++)
    {
        cout << Dpos[i] << " ";
    }
    cout << endl;

    vector<double>Dneg;
    cout << "Result of D- : ";
    for(int i = 0; i < number;i++)
    {
        double w = v[i] - ((double)i/(double)number);
        Dneg.push_back(w);
    }
    for(int i = 0; i < number;i++)
    {
        cout << Dneg[i] << " ";
    }
    cout << endl;

    double Dposmax = *max_element(Dpos.begin() , Dpos.end());
    double Dnegmax = *max_element(Dneg.begin() , Dneg.end());
    double D = max(Dposmax , Dnegmax);
    cout << "D+ max result " << Dposmax << endl;
    cout << "D- max result " << Dnegmax << endl;
    cout << "D result " << D << endl;

    double a = 0.565;

    if(D > a)
    {
        cout << "Rejcted the null hypothesis" << endl;
    }
    else
    {
        cout << "Not rejected the null hypothesis" << endl;
    }



    return 0;
}
