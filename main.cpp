/*Adriel A. Okolo
hw6 p3
Adding of arrays*/


#include <iostream>
using namespace std;
//declare a function named ArraySum() 
int ArraySum(int A[], int N)
{
        int sum;
        //if the size is less than or equal to 0
        //then simply return 0
        if(N<=0)
        {
                return 0;
        }
        //otherwise calculate the sum using recursion
        else
        {
                sum = A[N-1] + ArraySum(A,N-1);
        }
        //return the sum
        return sum;
}
//declare the main()  method
int main()
{
        int size;
        //input the size form the user
        cout<<"Enter the size of the array: ";
        cin>>size;
        //declare the array
        int arr[size];
        //prompt the user for the size
        cout<<"Enter the array elements: "<<endl;
        for(int i = 0; i<size; i++)
        {
                cin>>arr[i];
        }
        //call the ArraySum() method
        int s = ArraySum(arr,size);
        //print the sum
        cout<<"The sum of the elements of the array is: "<<s<<endl;
        return 0;
}