```C++
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>

int Didziausias(Triuksmas a[], int n)
{
    int did = a[0].db;
    for(int i = 1; i<n; i++)
        if(a[i].db> did)// pakeisti i maziausia
        {
            did = a[i].db;
        }
    return did;
}
void rikiavimas (int n, Apskr A[])
{
   for(int i = 0 ;i<n-1;i++)
   {
       for(int j = i+1;j<n;j++)
       {
           if(A[i].kiek<A[j].kiek) swap(A[i], A[j]);
           else if(A[i].kiek  == A[j].kiek &&A[i].vardas >A[j].vardas) swap(A[i], A[j]);
       }
   }
}
void salinimas(int &n,int a[],int k)
{
    for(int i =k; i<n; i++)
    {
        a[i] = a[i+1];
    }
    n--;
}
void iterpimas(int &n,int a[],int k,int nauja)
{
    int temp;
    for(int i =n; i>k; i--)
    {
        a[i]= a[i-1];
    }
    n++;
    a[k] = nauja;
}
 ifstream fin("U1.txt");
fin.close();
fd.ignore(80, '\n');

        char temp[11];
        fd.get(temp,11);
        A[i] = temp;

 while(!fin.eof())
      getline(cin,a);




```
