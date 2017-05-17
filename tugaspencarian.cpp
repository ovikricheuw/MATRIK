//binary searching,
//program bisa jalan jika data sudah terurut
#include <iostream>
using namespace std; 

int data[10]={1,3,4,7,12,25,40,65,78,90};
int binary_search(int cari)
{

int l,r,m;
int n=10;
l=0;
r=n-1;
int ketemu=0;
while (l<=r && ketemu==0)
{
m=(l+r)/2;
if (data[m]==cari)
ketemu=1;
else
if(cari<data[m])
r=m-1;
else l=m+1;
}
if(ketemu==1) return 1; else return 0;
}

int main()
{
int cari, hasil;
cout<<"masukan data yang ingin di cari= ";
cin>>cari;
hasil = binary_search(cari);
if(hasil==1)
{
cout<<"data ada!"<<endl;
}
else
if(hasil==0)
cout<<"data tidak ada!"<<endl;
return 0;
}