#include<iostream>
using namespace std;
string containsSeven(int numbers[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
    if(numbers[i]=='7')
    count++;
    }
    if(count>=1)
    return "BOOM!";
    else 
    return "there is no 7 in array";
    

}
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin >>size;
    int numbers[size];
    for(int i=0;i<size;i++)
    {
    cout<<"Enter Elemennt "<<i+1 <<": "; 
    cin >>numbers[i];
    }
    cout << containsSeven(numbers,size);



}