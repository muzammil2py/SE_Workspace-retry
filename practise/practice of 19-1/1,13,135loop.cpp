#include<iostream>
using namespace std;
int main(){
    int n;
    int j;
    int i;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<"";
            j++;
        }
        cout<<endl;
    }
    return 0;
}