#include <iostream>
using namespace std;

int main () {
int i,k,temp, ukuranx;
cout<<"masukan jumlah yang akan di input : ";
cin>>ukuranx;
int x[ukuranx];

for (int j=1; j<=ukuranx; j++) {
	cout<<"masukan data ke "<<j << " : ";
	cin>>x[j];
	}



for (i=-1; i<ukuranx; ++i){
	for (k=ukuranx; k > i + 1; --k) {
		if(x[k] < x [k-1]) {
			temp = x[k];
			x[k] = x [k-1];
			x[k-1] = temp;
			
				}
			}
		}
		
		for(i=1; i<=ukuranx; ++i) {
			
			cout << x[i] << endl;
			}
			
			return 0;
			
			}