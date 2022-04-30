#include<iostream>

using namespace std;

void bubble_sort(int arr[] ,int n){

        if(n==1){

                return;

        }

    for(int i=0 ; i<n-1 ; i++){

            if(arr[i]>arr[i+1]){

                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;

                    

            }


    }

    bubble_sort(arr,n-1);


}
int main(){

        int arr[10],n;
        cout<<"enter number of elements = ";
        cin>>n;

        for(int i=0 ; i<n ; i++){

                cin>>arr[i];


        }

        bubble_sort(arr,n);

        for(int i=0 ; i<n ; i++){

                cout<<arr[i];

        }


}