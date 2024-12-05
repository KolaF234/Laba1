#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> fileRead(){
    string s;
    vector<string> array;
    ifstream file("KolaF.txt");
    if(file.is_open()){
        while(getline(file, s)){
            array.push_back(s) ;
        }
    }
    file.close();
    cout << array.size();
    return array;
}
void fileOutput(){

}

void print(){

}

int main()
{

    vector<string> array = fileRead();
    return 0;
}
