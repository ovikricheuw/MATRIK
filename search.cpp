#include<iostream>
using namespace std;
int main () {

int x [10], cari;
bool ketemu;

for (int i=0; i<10; i++){
cout<<"masukan data :";
cin>>x[i];
}
cout<<"masukan data yang dicari :";
cin>>cari;
for (int i=0; i<10; i++){
if (x[i] == cari) {
ketemu = true;
break; }
else { 
ketemu = false; }
}

if (ketemu==true){
cout<<"data ditemukan"<<endl;}
else {
cout <<"data tidak ditemukan "<<endl;
}
}
