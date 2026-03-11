#include <iostream>
#include <fstream> 
#include <string>
using namespace std;


	
	int main(void) {
string filename = "input_es1.txt";
ifstream ifs(filename);
if ( ifs.is_open() ) { 
while( !ifs.eof() ) {
string location;
double t1,t2,t3,t4;
double media;
ifs >> location >> t1>>t2>>t3>>t4; // also >> : S×T →S
media=(t1+t2+t3+t4)/4.0;

cout << "La temperatura media a " << location << " e' " << media << "\n";
}
}
else{
	cout << "errore di lettura";
	
}
return 0;
}
	
	
	
	
