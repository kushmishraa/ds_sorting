#include<iostream>

using namespace std;

void swap(int arr[] , int i , int j ){

        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=arr[i];


}

int partition(int arr[] ,int l , int r){

        int pivot = arr[r];
        int i=l-1;

        for(int j=l ; j<r ; j++){

                if(arr[j]<pivot){
                        
                        i++;
                        swap(arr,i,j);
                }
        }

        swap(arr,i+1,r);

        return i+1;


}

void quicksort(int arr[] ,int l , int r){

                if(l<r){

                        int pi = partition(arr,l,r);

                        quicksort(arr,l,pi-1);
                        quicksort(arr,pi+1,r);




                }


}

int main(){

        int l,r,arr[10],n;

        cout<<"enter number of elements in the array :";
        cin>>n;
        l=0;
        r=n-1;

        for(int i=0 ; i<n ; i++){

                cin>>arr[i];
        }

        cout<<"\n=====befor swapping=====\n";

        for(int i=0 ; i<n ; i++){

                cout<<arr[i];
        }

        cout<<"\n======before swapping====\n";

        quicksort(arr,l,r);

        cout<<"\n========after swapping =======\n";

        for(int i=0 ; i<n ; i++){

                cout<<arr[i];
        }

        cout<<"\n======after swapping======\n";


}