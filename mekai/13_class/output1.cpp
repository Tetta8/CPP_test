#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ofstream fos("HELLO");
    
    if(!fos)
        cerr << "\aファイル\"HELLO\"をオープンできません。" << endl;
    else{
        fos << "Hello!" << endl;
        fos << "How are you?" << endl;
    }
}