#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,n4,wynik;
      long long silnia1 = 1;
      long long silnia2 = 1;
      long long silnia3 = 1;
      long long silnia4 = 1;

      cout<<"Podaj wartosci:";
      cin>>n1>>n2>>n3;

      for(int i1=n1;i1>1;i1--){
        silnia1 = silnia1 * i1;}

      for(int i2=n2;i2>1;i2--){
        silnia2 = silnia2 * i2;}

      for(int i3=n3;i3>1;i3--){
        silnia3 = silnia3 * i3;}

      n4 = n1 + n2 + n3;

      for(int i4=n4;i4>1;i4--){
        silnia4 = silnia4 * i4;}

      wynik = silnia4 / (silnia1 * silnia2 * silnia3);

      cout << wynik << endl;





}

