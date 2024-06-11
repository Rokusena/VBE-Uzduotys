#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>
void skaitymas(int A[],int &n,int &t1, int &t2);
int Didziausiovieta (int A[], int n);
int laikas (int d,int t1,int t2,int A[]);
using namespace std;

struct Autobusas{
string miestas;
float a=0;

}
int main ()
{
///    ofstream cou("rez.txt");       Faile coutinti
int A[101],n,viet,l,d,t1,t2;
skaitymas (A,n,t1,t2);
d=Didziausiovieta (A, n);
l=laikas(d,t1,t2,A);
///----------------------------------------------- Iterpimas

if (naujas<A[0]){
    iterpimas(A,n,0,naujas)
}
else if (naujas>A[n-1]){
    iterpimas(A,n,n,naujas);
}
else{
 for (int i=1 ;i<n;i++ ){
    if (naujas<A[i]&&naujas>A[i-1]){
        iterpimas(A,n,i,naujas);

    }



 }
}
///-----------------------------------------------Iterpimas
///-----------------------------------------------Salinimas prie if kriterijaus reikia
for (int i=0; i<n;i++){
    if (A[i]){
        salinimas(n,A,i)
        i-=1
    }
}
///-----------------------------------------------Salinimas

///cou.close();               Faile coutinti
return 0;
}


void skaitymas(int A[],int &n,int &t1, int &t2){ ///Skaitymo funkcija

///ifstream ci ("duom.txt");                     Faile skaityti
    cin>>t1>>t2>>n;
    for (int i=0; i<n; i++) {
            cin>>A[i];
    }

///ci.close();                               Faile skaityti

}
void skaitymas(Autobusas A[],int &n, int &b, int &c, float &d){ ///skaitymas char i

ifstream ci ("Duom2.txt");
    char g[16];
//ifstream ci("U2.txt");

ci>> n>>d>>b>>c;
ci.ignore(80, '\n');
for (int i = 0; i < n; i++){

 ci.get(g,16);
A[i].miestas=g;

ci>>A[i].a;

ci.ignore(80, '\n');
}



ci.close();
}
int Didziausiovieta (int A[], int n){ ///randa didziausio arba maziausio vieta maziausiam reikia pakeist zenkla ir viet=99999

int viet=0;
for (int i=0; i<n;i++){
    if (A[i]>A[viet]){
        viet=i;
    }
}
return viet;

}

int laikas (int d,int t1,int t2, int A[]){///kaip veikia paprasta funkcija
    int s=0;
for (int i=0;i<=d;i++){



     s+=A[i];
}
    int l=s*t1+(d+1)*t2;
return l;

}

void iterpimas(int A[],int &n int k,int naujas){ ///iterpimas dar reikia rasyt maine

for (int i=n; i>k;i--){

    A[i]=A[i-1];

}
n++;
A[k]=naujas;

}

void salinimas (int &n, int A[],int k){///salinimas reikia rasyt maine prie if kriterijaus reikia

for (int i=k; n<n-1; i++){

    A[i]=A[i+1];

}
n=n-1;
}

void didejantis (int A[],int n){ ///Rikiavimas sortinimas

int maz;
for (int i=0; i<n-1;i++){
    maz=i;
    for (int j=i+1;j<n;j++){
        if (A[j]<A[maz]) maz=j;
    }
        swap (A[i],A[maz]);
}



}
void rikiavimas (vardai A[],int n)  ///Dvigubas Rikiavimas sortinimas
{


    for (int i=0; i<n-1; i++)
    {

        for (int j=i+1; j<n; j++)
        {
            if (A[j].kiek<A[i].kiek)
            {

                swap (A[i],A[j]);
            }
            else if(A[i].kiek==A[j].kiek && A[i].vardas>A[j].vardas)
            {
                swap (A[i],A[j]);
            }

        }

    }



}


