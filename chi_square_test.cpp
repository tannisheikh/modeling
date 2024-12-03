#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Length of data set :";
    int data;
    cin >> data;
    cout << endl << "Enter all data : ";
    vector<double>v;
    for(int i = 0; i < data;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ei = 5;
    int n = data/ei;

    cout << "Length of class which range 5 to " << n << " :" ;
    int number = data/ei;
    cin >> number;

    if(number > n || number < ei)
    {
        cout << "Invailid class number" << endl;
        return 0;
    }

    double range = (double)(0+1)/(double)number;
    cout << "Every class range " << number << endl;


    vector<int>oi;
    cout << number << " oi value assign : ";
    for(int i = 0;i < number;i++)
    {
        int x;
        x = v[i]/range;
        oi[x]++;
    }
    cout << "List of oi------> ";
     for(int i = 0;i < number;i++)
    {
        cout << oi[i] << " ";
    }
    cout << endl;


    cout << "List of ei------> ";
     for(int i = 0;i < number;i++)
    {
        cout << ei << " ";
    }
    cout << endl;

    vector<int>sub;
    for(int i =0 ; i < number;i++)
    {
        int x = oi[i] - ei;
        sub.push_back(x);
    }
    cout << "List of oi - ei------> ";
     for(int i = 0;i < number;i++)
    {
        cout << sub[i] << " ";
    }
    cout << endl;

    vector<double>res;
    for(int i =0 ; i < number;i++)
    {
        double x = (double)(pow(( (double)sub[i]) , 2))/(double)ei;
        res.push_back(x);
    }
    cout << "List of oi - ei------> ";
    double D = 0.0;
     for(int i = 0;i < number;i++)
    {
        cout << res[i] << " ";
        D += res[i];
    }
    cout << endl;


    cout << "The result of D = " << D << endl;

    int a = 0.409;

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
