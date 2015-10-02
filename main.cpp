#include <iostream>
#include <cstdlib>

using namespace std;


 long long funkcja(long long n){

    long long silnia = 1;
    for (int i=n;i>1;i--){
        silnia = silnia%1000000007 * i;}
    return silnia;
}

int main()
{
    long long D1, D2, D3, S;
    cout<<"Podaj wartosci:"<<endl;
    cin>>D1>>D2>>D3;
    long long wynik1,wynik2,wynik3,wynik4;
    S=D1+D2+D3;
    wynik1 = funkcja(D1)%1000000007;
    wynik2 = funkcja(D2)%1000000007;
    wynik3 = funkcja(D3)%1000000007;
    wynik4 = funkcja(S)%1000000007;
    long long wynik;
    wynik = (wynik4 / (wynik1 * wynik2 * wynik3)%1000000007);

    cout<<wynik<<endl;

    return 0;
}

