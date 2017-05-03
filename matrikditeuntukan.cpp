#include <iostream>
using namespace std;
int x,y;
int main(){

cout<<"tentukan jumlah matrik : "<<endl;
cout<<"baris : ";cin>>x;
cout<<"Kolom : ";cin>>y;
int m [x] [y];
cout<<"masukan isi matrik :"<<endl;
for (int i=0; i<x; i++){
for (int j=0; j<y; j++){
cout<<"Masukan M baris    "<<i<< "   Kolom    "<<j<<endl;
cin>>m [i] [j];
}
}

cout<<"-";
for (int s=0;s<y;s++) {
cout<<"----";
}
for (int i=0; i<x; i++){
	
	cout << endl<<"I ";
	for (int j=0; j<y; j++){
		cout<<m [i] [j]<<" I ";		
	}
	cout<<endl;
	cout<<"-";
for (int s=0;s<y;s++) {
		cout<<"----";	
}

}


return 0;
}
