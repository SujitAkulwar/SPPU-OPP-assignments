#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
ofstream fout;
//
fout.open("Country");
fout << "United state of America";
fout << "United Kingdom";
fout.close();

fout.open("Capital");
fout << "Washington";
fout << "London";
fout.close();
//
const int N = 80;
char line[N];
//
ifstream fin;
fin.open("country");
cout << "contents of country file" << endl;

while (fin){
    fin.getline(line, N);
    cout << line;
}

fin.close();
//
fin.open("capital");
cout << "Contents of capital file" << endl;
while (fin){
    fin.getline(line, N);
    cout << line;
}
fin.close();
//
return 0;
}

