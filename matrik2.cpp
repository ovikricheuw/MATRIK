#include <iostream>
using namespace std;
int main (){

int m [3] [3];
int m1 [3] [3];
int m2[3] [3];

for (int i=0; i<3; i++) {
	for (int j=0; j<3; j++) {
	cin>>m1 [i] [j];
	cin>>m2 [i] [j];
	}
	}
	
	for (int i=0; i<3; i++) {
	for (int j=0; j<3; j++) {
	m [i] [j]=m1 [i] [j]+m2 [i] [j];
	}
	}
	cout<<"----------------"<<endl;
	for (int i=0; i<3; i++) {
	for (int j=0; j<3; j++) {
		
	cout <<m [i] [j]<<endl;
	
}
}
	return 0;
	
	}