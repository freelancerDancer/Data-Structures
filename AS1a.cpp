#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Chosse the operation you want to perform";
    cin >> choice;
    int arr[10];
    switch(choice) {
        case 1: {
            int arr[10];
            break;
        }
        case 2: {
            cout << "Array elements are : " << endl;
            for(int i= 0 ; i<10 ; i++) {
                cout << arr[i] << " ";

            }
            break;
        }
        case 3: {
            int element, position;
            cout << " Enter the element to insert : ";
            cin >> element;
            cout << "Position";
            cin >> position;
            for(int i= 9 ; i>position ; i--) {
                arr[i] = arr[i-1];
            } 
            break;
        }
        case 4 : {
            int position;
            cout << "Enter the position";
            cin>> position;
            for(int i= position ; i<9 ; i++) {
                arr[i]  =arr[i+1];
            }
            break;
        }
        case 5: {
            int element;
            cout << "Enter the element to search : ";
            cin >> element;
            for(int i=0 ; i<10 ; i++) {
                if(arr[i] == element) {
                    cout << "Position of element is : " << i << endl;
                }
            }
            break;
        }
        case 6 : {
            return 0;
            break;
        }

        default : {
            cout << "Invalid choice" << endl;
            break;
        }

    }while(choice != 6);


    return 0;
}