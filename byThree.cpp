#include <iostream>
using namespace std;
void byThree(int* num);
void reset(int* num){
    *num = 0;
    byThree(num);
}
 
void byThree(int* num){

    while(*num < 150){
        cout << *num;
        *num += 3;
        cout << '\n';
        if(*num >= 150) reset(num);
    } 

}

int main(){
    int start {};
    byThree(&start);
    

    return 0;   
}