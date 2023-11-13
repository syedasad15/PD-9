#include<iostream>
using namespace std;
int containsSeven(int numbers[],int size,int transformation)
{
    int count=0;
    for(int i=0;i<=transformation;i++)
    {
    if((numbers[i])%2!=0)
    numbers[i]=numbers[i]+2;
    if((numbers[i])%2==0)
    numbers[i]=numbers[i]-2;
    } 
    for(int x=0;x<size;x++)
    cout <<numbers[x] << " ";  

}
main()
{
    int size,transformation;
    cout<<"Enter the size of Array: ";
    cin >>size;
    cout<<"Enter the number of times you want to perform even-odd : ";
    cin >>transformation;

    int numbers[size];
    for(int i=0;i<size;i++)
    {
    cout<<"Enter Elemennt "<<i+1 <<": "; 
    cin >>numbers[i];
    }
    cout << containsSeven(numbers,size,transformation);



}