#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int x,n;

    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
   
    cout<<"Elements in the vector: ";
    for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }

    return 0;
}
