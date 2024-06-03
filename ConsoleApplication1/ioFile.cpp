#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string baris;

	//membuka file dengan mode menulis
	ofstream outfile;
	//menunjuk ke subuah nama file
	outfile.open("contohfile.txt");