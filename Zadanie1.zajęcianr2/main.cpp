#include <iostream>
#include <windows.h>
using namespace std;





int main(int argc, char*argv[])
{
    int liczba;

    cin>>liczba;
    for (int i=1;i<=liczba; i++)
    {
        for(int j=1 ;j<=(liczba-i)+15 ;j++)
        {

           cout<<" ";
        }
        for(int k=1 ;k<=(2*i)-1 ;k++)
        {

            cout<<"0";
        }

        cout<<" "<<endl;
    }

    return 0;
}
