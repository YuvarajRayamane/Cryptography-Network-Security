#include<bits/stdc++.h>
using namespace std;
string data, csum , gp, ans; //csum=checksum, gp=generating polynomial
int main(){
    cout<<"Input the data to be sent and the Generating polynomial: "<<endl;
    cin>>data>>gp;
    csum = data;
    for(int i=0; i<gp.size()-1; i++){
        csum+= '0';
    }
   while(csum.size()>(gp.size()-1)){

        if(csum[0]=='1'){
            for(int j=0; j<gp.size(); j++){
                csum[j] = (csum[j]==gp[j]) ? '0': '1';
            }
        }
        else{
            csum.erase(0,1);
        }

    }
     cout<<"The Check Value is : "<<csum<<endl;
    cout<<"The Data to be sent is : "<<data<<csum<<endl;
    data += csum ;
    cout<<"Enter the recieved data"<<endl;
    string rdata ;
cin>>rdata;
    cout<<((rdata==data)? "NO ERRORS": "THERE IS AN ERROR")<<endl;
}
