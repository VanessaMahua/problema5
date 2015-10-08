# problema5
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;
//Problema 5 --------------------------------
void read(char *file)
{
	ifstream archivo(file);
	string lista = "";
	while(getline(archivo,lista))
		cout<<lista<<endl;			
}

int main() {
	
	
	char  *archivo ="file.txt";
	read(archivo);
	
	return 0;
}
