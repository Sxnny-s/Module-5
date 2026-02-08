#include <iostream>
#include <cstring>
using namespace std;

int mystrlen(char* word);

int main(){

    char str[] = "test";
    cout << mystrlen(str);
    
    return 0;
}

int mystrlen(char* word){
    int length {};

    while(*word){
        word++;
        length++;
    }
   
    return length;
}