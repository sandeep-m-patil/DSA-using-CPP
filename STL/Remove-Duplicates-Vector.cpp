//duplicates of vector and remove
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    int n,i,data;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>data;
        v.push_back(data);
    }

    for(i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j]==v[i])v.erase(v.begin()+j);
        }
    }

    for(auto c:v)cout<<c<<" ";
}
