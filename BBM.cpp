#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;
int main() {

        int solar[50], pertalite[50], pertamax[50];
        int n, hsolar, hpertalite, hpertamax;

        cout<<"Masukan Harga solar = ";
        cin>>hsolar;
        cout<<"Masukan Harga Pertalite = ";
        cin>>hpertalite;
        cout<<"Masukan Harga Pertamax = ";
        cin>>hpertamax;
        cout<<endl;
        cout<<"Masukan Jumlah liter = ";
        cin>>n;

        cout<<endl;
        cout<<"-------------------------DAFTAR HARGA---------------------"<<endl;
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"LITER		SOLAR		PERTALITE	PERTAMAX"<<endl;
        cout<<"----------------------------------------------------------"<<endl;

        for (int i=1;i<=n;i++) {
                solar[i]=i*hsolar;
                pertalite[i]=i*hpertalite;
                pertamax[i]=i*hpertamax;
                cout<<i<<"\t\t"<<solar[i]<<"\t\t"<<pertalite[i]<<"\t\t"<<pertamax[i]<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;
        getch();
}
