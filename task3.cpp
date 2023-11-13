#include<iostream>
using namespace std;
bool containsSeven(string numbers[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
    if(numbers[i]==numbers[0])
    count++;
    }
    if(count==size)
    return true;
    else 
    return false;
    

}
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin >>size;
    string numbers[size];
    for(int i=0;i<size;i++)
    {
    cout<<"Enter Elemennt "<<i+1 <<": "; 
    cin >>numbers[i];
    }
    cout << containsSeven(numbers,size);



}