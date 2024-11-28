#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    cout<<"The sorted students are:"<<endl;

    for(int i=0;i<n;++i){
        int mkshift=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mkshift])
            mkshift=j; 
        }
        swap(arr[i], arr[mkshift]);
    }
}

void Display(int arr[], int n){
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of students:";
    cin>>n;

    int percentages[n];

    cout<<"Enter the percentages of the students:\n";

    for(int i=0; i<n; ++i){
        
        cin>>percentages[i];
    }

    SelectionSort(percentages, n);
    Display(percentages, n);


    return 0;
}