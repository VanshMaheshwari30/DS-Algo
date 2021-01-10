#include <bits/stdc++.h> 
using namespace std; 

int main(void){
    
    unordered_map <string,int> m;
    m["ABC"]=20;
    m["DEF"]=30;
    m.insert({"courses",15});
    
    if(m.find("DEF")!=m.end())
        cout<<"Found";
    else
        cout<<"Not Found ";
    
    cout<<endl;
    
    for(auto it=m.begin();it!=m.end();it++)
        cout<<(it->first)<<" "<<(it->second)<<endl;
    
    if(m.count("DEF")>0)
        cout<<"Found";
    else
        cout<<"Not Found";
    cout<<endl;
    
    cout<<m.size()<<endl;
    m.erase("DEF");
    m.erase(m.begin());
    cout<<m.size()<<endl;
    m.erase(m.begin(),m.end());
}
