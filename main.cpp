#include <iostream>
#include <cmath>
using namespace std;

int DecymalnieNaBinarnie(int x){
	int z=0;
	int * tab = new int[z];
	while(x>0){
		int a = x%2;
		tab[z]=a;
		z++;
		x = x/2;	
	}
	cout<<"Your number equals ";
	for(z=z-1;z>=0;z--){
	cout<<tab[z];
	}
	cout<<" written binary."<<endl;	
}

int BinarnieNaDecymalnie(int liczba){
	int suma, i;
	int * tab= new int[i];
	for(i=0; liczba!=0;i++){
		tab[i]=liczba%10;
		liczba /= 10;
	}
	for(int j=0;j<i;j++){
		suma += pow(2,j)*tab[j];
		
	}
	cout<<"Your number equals "<<suma<<" written decimal."<<endl;
}

int main() {
	system("chcp 1250");
	int wybor;
	int liczba;
	for(;;){
	
	cout<<"Welcome to Binary Calculator"<<endl;
	cout<<"______________________________"<<endl;
	cout<<"1.Decimal to Binary conversion."<<endl;
	cout<<"2.Binary to Decimal conversion."<<endl;
	cout<<endl;
	
	cout<<"Enter option(1 or 2): "<<endl;
	cin>>wybor;
	
	if(wybor==1){
		cout<<"Enter decimal number: "<<endl;
		cin>>liczba;
	   DecymalnieNaBinarnie(liczba);
	}
	else if(wybor==2){
		int m;
		cout<<"Enter binary number: "<<endl;
		cin>>m;

		BinarnieNaDecymalnie(m);
	}
	else cout<<"Select the correct option!"<<endl;
	cout<<endl;
    cout<<endl;  
} 

	return 0;
}
