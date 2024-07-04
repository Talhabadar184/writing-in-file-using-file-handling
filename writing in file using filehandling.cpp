#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int a,name[10];
    ofstream file("file.txt");
    
    cout << "Please enter  integers: " << endl;
    
    
    for( a=0; a<6; a++) {
        cin >> name[a];
    }
    
    
    for( a=0; a<6; a++) {
        if(name[a] > 12) {
            file << name[a] << " ";
        }
    }
    
    file.close();
    cout << "Data written to file successfully." << endl;
    
    return 0;
}
