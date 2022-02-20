#include<iostream>
using namespace std;
int main()
{
    int data[5];
    cout<<"Enter elements: ";
    
    for (int i = 0; i < 5; ++i)
    cin>>data[i];
    {
        cout<<"you entered : ";
        for (int i = 0; i < 5; ++i)

        {
            cout<<endl<<*(data+i);

        }
        
    }
    return 0;
}
OUTPUT:
Enter elements: 1
2
3
4
5
you entered : 
1
2
3
4
5
