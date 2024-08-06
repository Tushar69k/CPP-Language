#include<iostream>
using namespace std;
int main(){
    int maxSize=10;
    int arr[maxSize],size,i;
      for(i = 0; i < maxSize; i++){
        arr[i] =0;
    }
    cout<<"enter size of array:";
    cin>>size;
    cout<<"enter elements for the array one by one:"<<endl;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    cout<<"the array is:"<<endl;
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
     cout << "\nempty indexes in the array are: ";
    for(i = 0; i < maxSize; i++){
        if(arr[i] ==0){
            cout << i << "\t";
        }
    }
    cout << endl;
    if(size<maxSize){
        cout<<"\nenter the  missing elements of the array:"<<endl;
        for(i=size;i<maxSize;i++){
            scanf("%d",&arr[i]);
        } 
        cout<<"updated array is:"<<endl;
        for(i=0;i<maxSize;i++){
            printf("%d\t",arr[i]);
        }
    }
    else{
        cout<<"\nno space to add element in the array!";
    }
    return 0;
}