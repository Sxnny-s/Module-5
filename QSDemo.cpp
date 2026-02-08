#include <iostream>
#include <cstring>
using namespace std;

void quicksort(int *items, int len);
void qs(int *items, int left, int right);

int main(){
    // goal sort a list of strings
    int arr[100];
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i {}; i < length; i++) {
        int new_index = (i + 3) % length;
        arr[new_index] = i+1;

    }

    cout << "original array: " << endl;

    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, length);

    cout << "Sorted order: " << endl;

    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}

void quicksort(int *items, int len){
    qs(items,0,len-1);
}

void qs(int *items, int left, int right){
    int i,j;
    int p,t;

    // i is the left bound
    // j is the right bound
    // p is out piviot index
    // t is our temp value for swaping 
    i = left;
    j = right;
    p = items[(left + right) / 2];

    do {
        // increment i while the index loacted at i is less than our pivot index (x)
        while(items[i] < p && i < right) i++;
        // same idea for the j index 
        while(items[j] > p && j > left) j--;

        // check if i and j have not crossed each other 
        if(i <= j){
            t = items[i];
            items[i] = items[j];
            items[j] = t;
            i++;
            j--;
        }  
    //     for(int i = 0; i < 1000; i++) {
    //     cout << items[i] << " ";
    //     }

    // cout << endl;
    }while(i <= j);
        
    if(j > left) qs(items,left,j);
    if(i < right) qs(items, i ,right);

}