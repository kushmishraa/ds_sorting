#include<iostream>
using namespace std;

 int main(){

        int arr[10],min=0,n;

        cout<<"enter number of elements in the array =";
        cin>>n;



        for(int i=0 ; i<n ; i++){

                cin>>arr[i];

        }

        for(int i=0 ; i<n-1 ; i++){

                    min=arr[i];

                    for(int j=i+1 ; j<n ; j++){

                        if(arr[j]<min){

                                int temp=arr[j];
                                arr[j]=arr[i];
                                arr[i]=temp;

                                

                        }


                    }

        }

        for(int i =0 ; i<n ; i++){


                cout<<arr[i]<<" ";

        }



 }