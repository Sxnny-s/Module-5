#include <iostream>
#include <cstring>
using namespace std;

// function prototype
// qs the function quicksort will call 
void qs(int* items, int left, int right);
// quick sort function that call qs
void quicksort(int* items, int length);

int main(){

    // int arr of 20 intergers
    int arr[10];
    // init variable called length size of the array
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i {}; i < n; i++){
        int new_index = (i + 3) % n;
        arr[new_index] = i + 1;
    }
    // diplay the original array
    cout << "orginal array" << '\n';
    for (int i {}; i < n; i++){
        cout << arr[i];
    }
    cout << '\n';
    // call quick sort on the array
    quicksort(arr,n);
    //  display the sorted array 
    cout << "sorted array" << '\n';
    for (int i {}; i < n; i++){
        cout << arr[i];
    }

    return 0;
}

// quicksort definition 
void quicksort(int* items, int length){
    qs(items,0,length - 1);
}

// qs definition 
void qs(int* items, int left, int right){

    // init i ,j pointers to travers the array 
    int i, j;
    i = left;
    j = right;
    // init p,t for piviot and temp (for swaping)
    int p,t;
    p = items[(left + right) / 2];
    
    
    while(i <= j){
        // move i up when its less than than p 
        while(items[i] < p && i < right)i++;
        // move j down when its greater than p 
        while(items[j] > p && j > left)j--;
        if(i <= j){
            t = items[i];
            items[i++] = items[j];
            items[j--] = t;
        }
    } 
    if(j > left) qs(items,left,j);
    if(i < right) qs(items,i,right);


    //call qs on the left and right sides 

}


