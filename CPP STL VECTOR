#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(22);
    v.emplace_back(23);
    v.emplace_back(24);
    v.emplace_back(25);
    v.emplace_back(26);
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    //emplace_back is faster 
    vector<int>v3(5,100);
    //{100,100,100,100,100}
    vector<int>v6(5);
    //{0,0,0,0,0}
    // or any garbage value is being stored 
    vector<int>v1(5,20);
    //{20,20,20,20,20}
    vector<int>v2(v1);
    //{20,20,20,20,20}
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<endl;
    cout<<v[0]<<" "<<v.at(0)<<endl;
    // vector<int>::iterator it2=v.rbegin();
    // vector<int>::iterator it3=v.rend();
    vector<int>::iterator it1=v.end();
    cout<<*(it1)<<endl;;
    //this print garbage value as it is one behind last memory location
    it1--;
    cout<<*(it1)<<endl;
    for(vector<int>:: iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<v.back()<<endl;;
    v.erase(v.begin()+1);
     for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2,v.begin()+4);
     for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}
