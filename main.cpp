#include<iostream>
#include <windows.h>
#include<string.h>
#include<iomanip>

using namespace std;
int x,n,tmp,i,j,k,l;
string nama[40],tmps;
char namaa[40][40],tmpss[40];
int hasiltes[20];
void s_angka_as()
{
    for ( i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (hasiltes[i]<hasiltes[j])
            {
                nama[i].swap (nama[j]);

                tmp=hasiltes[i];
                hasiltes[i]=hasiltes[j];
                hasiltes[j]=tmp;

            }
        }
    }
//
}

void s_angka_es()
{
    for ( i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (hasiltes[i]>hasiltes[j])
            {
                nama[i].swap (nama[j]);

                tmp=hasiltes[i];
                hasiltes[i]=hasiltes[j];
                hasiltes[j]=tmp;

            }
        }
    }
//
}

void s_kata_as()
{
    for ( i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (hasiltes[i]<hasiltes[j])
            {
                nama[i].swap (nama[j]);
tmp=hasiltes[i];
                hasiltes[i]=hasiltes[j];
                hasiltes[j]=tmp;
            }

                tmps=nama[i];
                nama[i]=nama[j];
                nama[j]=tmps;
        }
    }
//
}

void s_kata_es()
{
    for ( i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (hasiltes[i]>hasiltes[j])
            {
                nama[i].swap (nama[j]);

tmp=hasiltes[i];
                hasiltes[i]=hasiltes[j];
                hasiltes[j]=tmp;
            }

                tmps=nama[i];
                nama[i]=nama[j];
                nama[j]=tmps;
        }
    }
//
}

void i_angka_as()
{
    for(i=1; i<=n-1; i++)
    {
        tmp=hasiltes[i];
        j=i-1;

        while((tmp<hasiltes[j])&&(j>=0))
        {
            hasiltes[j+1]=hasiltes[j];
            j=j-1;
        }
        hasiltes[j+1]=tmp;    //insert element in proper place
    }
    cout<<"\nsetalah inserting sort nilai hasiltes besar ke kecl\n";
    for(i=0; i<n; i++)
    {
        cout<<hasiltes[i]<<" , ";
    }
//
}

void i_angka_es()
{
    for(i=1; i<=n-1; i++)
    {
        tmp=hasiltes[i];
        j=i-1;

        while((tmp>hasiltes[j])&&(j>=0))
        {
            hasiltes[j+1]=hasiltes[j];
            j=j-1;
        }
        hasiltes[j+1]=tmp;    //insert element in proper place
    }
    cout<<"\nsetalah inserting sort nilai hasiltes besar ke kecl\n";
    for(i=0; i<n; i++)
    {
        cout<<hasiltes[i]<<" , ";
    }
//
}

void i_kata_as()
{
    for (i=1; i<=n; i++)
    {
        if (i>1)
        {
            for (j=1; j<=(i-1); j++)
            {
                n=(strcmp(namaa[i], namaa[j]));
                if (n<=0)
                {
                    strcpy (tmpss, namaa[i]);
                    for (k=(i-1); k>=j; k--)
                    {
                        l=(k+1);
                        strcpy (namaa[l], namaa[k]);
                    }
                    strcpy (namaa[j], tmpss);
                }
            }
        }
    }
    cout<<"\nsetalah inserting sort nilai nama besar ke kecl\n";
    for(i=0; i<n; i++)
    {
        cout<<namaa[i]<<" , ";
    }
}

void i_kata_es()
{
    for (i=1; i<=n; i++)
    {
        if (i>1)
        {
            for (j=1; j<=(i-1); j++)
            {
                n=(strcmp(namaa[i], namaa[j]));
                if (n<=0)
                {
                    strcpy (tmpss, namaa[i]);
                    for (k=(i-1); k<=j; k--)
                    {
                        l=(k+1);
                        strcpy (namaa[l], namaa[k]);
                    }
                    strcpy (namaa[j], tmpss);
                }
            }
        }
    }
    cout<<"\nsetalah inserting sort nilai nama besar ke kecl\n";
    for(i=0; i<n; i++)
    {
        cout<<namaa[i]<<" , ";
    }
}
void outputs()
{
    //    output setelah disort
    cout<<" --------------------------------------------------------------------------"<<endl;
    cout<<" |"<<setw(5)<<" NAMA "<<setw(5)<<"|"<<setw(15)<<"              HASIL TES"<<setw(20)<<"|"<<setw(10)<<"KETERANGAN"<<setw(10)<<"|";
    cout<<" \n --------------------------------------------------------------------------";

    for(int i=0; i<n; i++)
    {


        if(hasiltes[i]>=80 && hasiltes[i]<=100)
        {
            cout<<"\n |"<<setw(5)<<nama[i]<<setw(6)<<"|"<<setw(15)<<hasiltes[i]<<setw(27)<<"|"<<setw(10)<<"DITERIMA"<<setw(10)<<"|";
            cout<<" \n --------------------------------------------------------------------------";
        }

        if(hasiltes[i]>=70 && hasiltes[i]<80)
        {
            cout<<"\n |"<<setw(5)<<nama[i]<<setw(6)<<"|"<<setw(15)<<hasiltes[i]<<setw(27)<<"|"<<setw(10)<<"CADANGAN"<<setw(10)<<"|";
            cout<<" \n --------------------------------------------------------------------------";
        }

        if(hasiltes[i]<70)
        {
            cout<<"\n |"<<setw(5)<<nama[i]<<setw(6)<<"|"<<setw(15)<<hasiltes[i]<<setw(27)<<"|"<<setw(10)<<"DITOLAK"<<setw(10)<<"|";
            cout<<" \n --------------------------------------------------------------------------";
        }
    }

//
}

main()
{

//    input array
    cout<<"Data mahasswa Teknolog Rekayasa Perangkat Lunak \n";
//
menu:
    cout << "What do you want?..  \nUrutkan .. ";
    cout << "\n1. Data berdasarkan Nilai Secara Ascending \n2. Data berdasarkan Nilai Secara Descending \n3. Data berdasarkan Nama Secara Ascending \n4. Data berdasarkan Nama Secara Descending";
    cout << "\n5. Cek Nama Saja Secara Ascending \n6. Cek Nama Saja Secara Descending \n7. Cek Angka Saja Secara Ascending \n8. Cek Angka Saja Secara Descending";
    cout << "\n9. Kembali \n0. Keluar \n\n";
    cout << "Masukkan jenis yang dipilih: ";
    cin >> x;
    cout << "\nMasukkan banyak data : ";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<" Nama            = ";
        cin>>nama[i];
        cout<<" Hasil Tes       = ";
        cin>>hasiltes[i];
        cout<<endl;
    }
    switch(x)
    {
    case 1:
    {
        s_angka_es();
        outputs();
        cout << "\n\n";
        goto menu;
        break;
    }
    case 2:
    {
        s_angka_as();
        outputs();

        cout << "\n\n";
        goto menu;
        break;
    }
    case 3:
    {
        s_kata_es();
        outputs();
        cout << "\n\n";
        goto menu;
        break;
    }
    case 4:
    {
        s_kata_as();
        outputs();
        cout << "\n\n";
        goto menu;
        break;
    }
    case 5:
    {
        i_kata_es();
        cout << "\n\n";
        goto menu;
        break;
    }
    case 6:
    {
        i_kata_as();
        cout << "\n\n";
        goto menu;
        break;
    }
    case 7:
    {
        i_angka_es();
        cout << "\n\n";
        goto menu;
        break;
    }
    case 8:
    {
        i_angka_as();
        cout << "\n\n";
        goto menu;
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
}
