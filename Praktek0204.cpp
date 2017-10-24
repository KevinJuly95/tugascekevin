#include <iostream>
#include <conio.h>
using namespace std;
	int main(){
		int LR=42;
	cout<<"luas Rumah		:"<<LR<<"m2"<<endl;
	double LP=1.87596;
	cout<<"Luas 1 box Parket	:"<<LP<<"m2"<<endl;
	double JP=LR/LP;
	cout<<"Jumlah box Parket	:"<<JP<<endl;
	double BPR=JP*500;
	cout<<"Biaya Parket (Rp)	:"<<BPR<<endl;
	int BPS=LR*20;
	cout<<"Biaya Pasang	(Rp)	:"<<BPS<<endl;
	}
