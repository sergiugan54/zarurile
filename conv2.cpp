#include <iostream>
#include <fstream>
#include<cmath>
using namespace std;
ifstream f("numere.txt");
ofstream g("iesire.out");
int main(){
	int nr,rezultat=0,rest, putere=1;
	while(f>>nr){
		do{
		f>>nr;
		rest=nr%2;
		rezultat=rezultat+rest*putere;
		putere=putere*10;
		nr=nr/2;}
		while(nr!=0);
		cout<<rezultat<<" ";
	}
f.close();}
