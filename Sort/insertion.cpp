#include <iostream>
#include <string.h>

using namespace std;

int data[50], data2[50];
char kata[50][49], tmp[50];
int n,x;
//angka
void insertion_sortasc()
{
    int temp, i, j;
    for(i=1; i<=n; i++)
    {
        temp = data[i];
        j = i -1;
        while(data[j]>temp && j>=0)
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
    }
}

void insertion_sortsc()
{
    int temp, i, j;
    for(i=1; i<=n; i++)
    {
        temp = data[i];
        j = i -1;
        while(data[j]<temp && j>0)
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
    }
}
void insertion_output()
{
    for(int i=1; i<=n; i++)
    {
        cout<<"Data ["<<i<<"] = ";
        cout<<data[i]<<endl;
    }
    cout << endl;
}

void insertion()
{
    cout << "Masukkan jumlah data: ";
    cin >> n;
    cout << endl;
    for(int i=1; i<=n; i++)
    {
        cout << "Masukkan data ke-" << i << ": ";
        cin >> data[i];
        data2[i] = data[i];
    }
    cout << "\nUrutkan Secara";
    cout << "\n1. Ascending \n2. Descending \n";
    cout << "Masukkan jenis yang dipilih: ";
    cin >> x;
    switch(x)
    {
    case 1:
    {
        insertion_sortasc();
        break;
    }
    case 2:
    {
        insertion_sortsc();
    }
    }
    cout << "\nData Setelah diurutkan" << endl;
    cout << "------------------------" << endl;
    insertion_output();
}
//kata
void insertion_kataasc()
{
    int i, j, nn, k, l;
    for (i=1; i<=n; i++)
    {
        cout<<"Kata ke-"<<i<<" = ";
        cin>>kata[i];
        if (i>1)
        {
            for (j=1; j<=(i-1); j++)
            {
                nn=(strcmp(kata[i], kata[j]));
                if (n<=0)
                {
                    strcpy (tmp, kata[i]);
                    for (k=(i-1); k>=j; k--)
                    {
                        l=(k+1);
                        strcpy (kata[l], kata[k]);
                    }
                    strcpy (kata[j], tmp);
                }
            }
        }
    }
}

void insertion_katasc()
{
    int i, j, nn, k, l;
    for (i=1; i<=n; i++)
    {
        cout<<"Kata ke-"<<i<<" = ";
        cin>>kata[i];
        if (i>1)
        {
            for (j=1; j<=(i-1); j++)
            {
                nn=(strcmp(kata[i], kata[j]));
                if (n>=0)
                {
                    strcpy (tmp, kata[i]);
                    for (k=(i-1); k>=j; k--)
                    {
                        l=(k+1);
                        strcpy (kata[l], kata[k]);
                    }
                    strcpy (kata[j], tmp);
                }
            }
        }
    }
}
void output()
{
    cout<<"\nHasil pengurutan : \n";
    for (int i=1; i<=n; i++)
    {
        cout<<"Kata ke-"<<i;
        cout<<" = ";
        cout<<kata[i]<<endl;
    }
}

void insertionkata()
{
    cout << "Masukkan jumlah data: ";
    cin >> n;
    cout << endl;
    cout << "\nUrutkan Secara";
    cout << "\n1. Ascending \n2. Descending \n";
    cout << "Masukkan jenis yang dipilih: ";
    cin >> x;
    switch(x)
    {
    case 1:
    {
        insertion_kataasc();
        break;
    }
    case 2:
    {
        insertion_katasc();
    }
    }
    cout << "\nData Setelah diurutkan" << endl;
    cout << "------------------------" << endl;
    output();
}

int main()
{
    cout << "\ninsertion";
    cout << "\n1. insertion angka \n2.insertion kata \n";
    cout << "Masukkan jenis yang dipilih: ";
    cin >> x;
    switch(x)
    {
    case 1:
    {
        insertion();
        break;
    }
    case 2:
    {
        insertionkata();
    }
    }

}
