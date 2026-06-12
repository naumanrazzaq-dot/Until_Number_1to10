#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter a number Between 1 to 10 ";
    do
    {

        cin>>num;
        if(num<0 || num>10)
            {
                cout<<"Enter a valid num to stop Program";
            }
    }
    while(num < 1 || num > 10);
    return 0;
}
