#include <iostream>
#include <cstdlib>

using namespace std;


 bool funkcja(long long int n;){ //coś tu jest źle zrobione...

    long long silnia = 1;
    for (int i=n;i>1;i--){
        silnia = silnia * i;}
    return silnia;
}

int main()
{
    long long int D1, D2, D3;
    cout<<"Podaj wartosci:"<<endl;
    cin>>D1>>D2>>D3;


    return 0;
}

