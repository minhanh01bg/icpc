#include<iostream>
#include<string>//large number 1
//bài H
using namespace std;
string mi(string a, string b){
    while(a.size()<b.size()) a="0"+a;
    while(a.size()>b.size()) b="0"+b;
    int nho = 0;
    string res="";
    for(int i= a.length()-1; i>=0 ;i--){
        int so= int (a[i]-'0')+int(b[i]-'0')+nho;
        nho=0;
        if(so>=10){
            res = char(so-10+'0')+res;
            nho = 1;
        }
        else res=char(so+'0')+res;
    }
    if(nho!=0) res='1'+res;
    return res;
}
string dao(string s){
    string str;
    for(int i=s.length()-1;i>=0;i--){
        
        str=str+s[i];
    }
    return str;
}
bool d(string s,int z){
    int k=0;
    for(int i=0;i<s.size();i++){
        k=k*10+s[i]-'0';
        k%=z;
    }
    if(k==0)
    return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a;
        if(d(a,7)) {
            cout<<a<<endl;
            continue;
        }
        string s;
        s=mi(a,dao(a));
        if(d(s,7)) {
            cout<<s<<endl;
            continue;
        }
        int x=0;
        for(int i=1;i<=1000;i++){
            s=mi(s,dao(s));
            if(d(s,7)) {
                cout<<s<<endl;
                x=1;
                break;
            }
        }
        if(x==0)
        cout<<-1<<endl;
        
    }
}