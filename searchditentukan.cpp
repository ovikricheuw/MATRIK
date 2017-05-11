#include<iostream>
using namespace std;

int main () {
int ukuranx, i=0;
int s;
cout<<"masukan ukuran : ";
cin>>ukuranx;
int x [ukuranx];


for (int j=0; j<ukuranx; j++) {
	cout<<"masukan data ke "<<j+ 1 << " : ";
	cin>>x[j];
	}
	
	cout<<"masukan data yang dicari : ";
	cin>>s;
	
	while (i<ukuranx && x[i] !=s)
	i++;
	
	if (x[i] == s) 
	cout <<"data ditemukan pada indeks ke "<<i<<endl;
	else 
	cout <<"data tidak ditemukan "<<endl;
	
	return 0;
	}
	
