#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

   vector<int> v;
   
   v.push_back(5);
   v.push_back(1);
   v.push_back(2);
   v.push_back(9);
   v.push_back(8);
   
   sort(v.begin(), v.end());
   cout<<binary_search(v.begin(),v.end(),9)<<endl;
   cout<<distance(v.begin(), lower_bound(v.begin(), v.end(), 9))<<endl;
   
   
   cout<<max(9,4)<<endl;
   cout<<min(9,4)<<endl;
   int a=9,b=8;
   swap(a,b);
   cout<<a<<" "<<b<<endl;
   
   string s="Patil";
   reverse(s.begin(),s.end());
   cout<<s<<endl;
   
}