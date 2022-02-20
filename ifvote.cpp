#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age of user: ";
    cin>>age;
    if (age>=18)
    {
        cout<<"\n You are eligible to vote";

    }
    else{
        cout<<"\n You are not eligible to vote";
    }
return 0;
}
output:
Enter the age of user: 20

 You are eligible to vote
