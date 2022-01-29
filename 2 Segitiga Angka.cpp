#include <iostream>

using namespace std;

int main()
{
    int jumlah,a,b,c;
    cout<<"\n Masukkan Angka Maksimal : ";
    cin>>jumlah; 
    for (a=1;a<=jumlah;a++)
    {
        b=1;
        for (b=1;b<=jumlah;b++)
        {
            if(b<=a)
            {
                cout<<b;
            } else {
                cout<<" ";
            }
        }
        for (c=jumlah-1;c>0;c--)
        {
            if(c<=a){
                cout<<c;
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    for (a=jumlah-1;a>0;a--)
    {
        b=1;
        for (b=1;b<=jumlah;b++)
        {
            if(b<=a)
            {
                cout<<b;
            } else {
                cout<<" ";
            }
        }
        for (c=jumlah-1;c>0;c--)
        {
            if(c<=a){
                cout<<c;
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}