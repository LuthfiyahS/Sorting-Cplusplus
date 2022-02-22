#include<iostream>

#include <string.h>

using namespace std;

int is,ns,js,ks,tmps;
int datas[50];
string nama[50],tmpss;

void outputselecangka()
{
    cout<<"\n setelah diurutkan akan menjadi : \n";
    for(is=0;is<ns;is++)
    {
        cout<<datas[is]<<" \n";
    }
}
void selectionangkaa()
{
    cout << "Masukkan jumlah data: ";
    cin >> ns;
    cout << endl;
    cout<<"mengurutkan nilai dari besar ke kecil"<<endl<<endl;
    for(is=0;is<ns;is++)
    {
        cout<<"Masukkan nilai "<<is+1<<" : ";cin>>datas[is];
    }
    for(is=0;is<ns-1;is++)
    {
    ks=is;
        for(js=is+1;js<ns;js++)
        {
            if(datas[ks]>datas[js])
            {
                ks=js;
            }
        }
        tmps=datas[ks];
        datas[ks]=datas[is];
        datas[is]=tmps;
    }
    outputselecangka();
}

void selectionangka()
{
    cout << "Masukkan jumlah data: ";
    cin >> ns;
    cout << endl;
    cout<<"mengurutkan nilai dari besar ke kecil"<<endl<<endl;
    for(is=0;is<ns;is++)
    {
        cout<<"Masukkan nilai "<<is+1<<" : ";cin>>datas[is];
    }
    for(is=0;is<ns-1;is++)
    {
    ks=is;
        for(js=is+1;js<ns;js++)
        {
            if(datas[ks]<datas[js])
            {
                ks=js;
            }
        }
        tmps=datas[ks];
        datas[ks]=datas[is];
        datas[is]=tmps;
    }
    outputselecangka();
}

void angka()
{
    int x;
    cout << "selection angka \nUrutkan Secara";
    cout << "\n1. Ascending \n2. Descending \n";
    cout << "Masukkan jenis yang dipilih: ";
    cin >> x;
    switch(x)
    {
    case 1:
    {
        selectionangkaa();
        break;
    }
    case 2:
    {
        selectionangka();
    }
    }

}



void outputselect()
{
    cout<<"\n setelah diurutkan akan menjadi : \n";
    for(is=0; is<ns; is++)
    {
        cout<<nama[is]<<" \n";
    }
}

void selecta()
{
    cout<<"masukkan banyak data : ";
    cin>>ns;
    for (int is=0; is<ns; is++)
    {
        cout<<" Nama         : ";
        cin>>nama[is];
        cout<<endl;
    }
    for (int is=0; is<ns; is++)
    {
        for (int js=is+1; js<ns; js++)
        {
            if (nama[is]< nama[js])
            {
                nama[is].swap (nama[js]);


            }
            tmpss=nama[is];
                nama[is]=nama[js];
                nama[js]=tmpss;
        }
    }
    outputselect();
}

void select()
{
    cout<<"masukkan banyak data : ";
    cin>>ns;
    for (int is=0; is<ns; is++)
    {
        cout<<" Kata         : ";
        cin>>nama[is];
    }
    for (int is=0; is<ns; is++)
    {
        for (int js=is+1; js<ns; js++)
        {
            if (nama[is]> nama[js])
            {
                nama[is].swap (nama[js]);


            }
            tmpss=nama[is];
                nama[is]=nama[js];
                nama[js]=tmpss;
        }
    }
    outputselect();
}

void kata()
{
    int x;
    cout << "selection kata \nUrutkan Secara";
    cout << "\n1. Ascending \n2. Descending \n";
    cout << "Masukkan jenis yang dipilih: ";
    cin >> x;
    switch(x)
    {
    case 1:
    {
        selecta();
        break;
    }
    case 2:
    {
        select();
    }
    }
}

 int main()
{
    menu:
    int x;
    cout << "selection  \nUrutkan Secara";
    cout << "\n1. selection angka \n2. selection kata \n0. Keluar\n";
    cout << "Masukkan jenis yang dipilih: ";
    cin >> x;
    switch(x)
    {
    case 1:
    {
        angka();
        break;
    }
    case 2:
    {
        kata();
        break;
    }
    case 0:
    {
        return 0;

    }
    default:
    {
        goto menu;
        break;
    }
    }
    cout << "\n\n\n";
    goto menu;
}
