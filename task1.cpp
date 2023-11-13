#include<iostream>
using namespace std;
bool isLengthEveen(string word)
{
    int i=0,count=0;
    while(word[i]!='\0')
    {
    count++;
    i++;
    }
    if(count%2==0)
    return true;
    else
    return false;

}
main()
{
    string word;
    cout <<"Enter any string: ";
    cin >>word;
    cout <<isLengthEveen( word);
}
