#include <iostream>
#include <cstdlib>

using namespace std;


 long long silnia(long long n){

    if(n<2)return 1;

    return (n* silnia(n-1))%1000000007; }

int main()
{
    long long D1, D2, D3, S;

    cout<<"Podaj wartosci:"<<endl;
    cin>>D1>>D2>>D3;

    long long wynik1,wynik2,wynik3,wynik4;
    S=D1+D2+D3;
    wynik1 = silnia(D1);
    wynik2 = silnia(D2);
    wynik3 = silnia(D3);
    wynik4 = silnia(S);

    long long wynik;
    wynik = (wynik4 / (wynik1 * wynik2 * wynik3)%1000000007);

    cout<<wynik<<endl;

    return 0;
}

