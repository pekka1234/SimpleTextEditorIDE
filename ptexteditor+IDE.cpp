#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main(){
    string code;
    char line[100];

    while(1){
        cin.getline(line, sizeof(line));

        if(string(line)[0] != ':'){
            code += string(line) + '\n';
        }else{
            ofstream file(string(line).erase(0, 1));
            file << code;
            file.close();
            break;
        }
    }
}
