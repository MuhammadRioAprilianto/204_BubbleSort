#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variabel global array dengan panjang 20
int n;

void input(){ //prosedur input
    int d;
    while (true){
        cout << "Masukkan banyaknya elemen pada array maksimal 20: ";
        cin >> n;
        if (n <= 20){
            break;
        }
        else{
            cout << "\nArray maksimal 20 elemen\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array";
    cout << "=====================" << endl;

    for (int i=0;i<n;i++){
        cout << "Data ke-" << (i+1) << " = ";
        cin >> arr[i];
    }
}

void bubbleSortArray(){
    int pass = 1; //step 1
    do{
        for (int j=0;j<=n-1-pass;j++){ //step 2
            if (arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass = pass + 1; //step 4  
    }while(pass <= n-1); //step 5

}

void display(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j=0;j<n;j++){
        cout << arr[j];
        if (j<n-1){
            cout << " --> ";
        }
    }
}

int main(){
    input();
    bubbleSortArray();
    display();
}