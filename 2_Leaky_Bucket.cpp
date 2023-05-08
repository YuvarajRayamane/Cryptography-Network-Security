#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,temp = 0,bsize,rate,n,p,a[20],sent,r;   //n=number of packets,temp=bucket remaining,p=packets,r=received
    cout<<"Enter the Bucket Capacity, rate and number of packets"<<endl;
    cin>>bsize>>rate>>n;                         // Ex: 4 3 5
    cout<<"Enter Packets : "<<endl;
    for(i=1; i<=n; i++){
        cin>>p;                                 //Ex: 2 4 1 5 3
        a[i]=p;
    }
    cout<<"Packet size\t\taccept\t\tsent\t\tremaining"<<endl;
    for(i=1; i<=n; i++){
        if(a[i] != 0){
            if(temp+a[i] > bsize){
                r = -1;
            }
            else{
                r = a[i];
                temp += a[i];
            }
        }
        else{
            r = 0;
        }
        if(temp != 0){
            if(temp < rate){
                sent = temp;
                temp = 0;
            }
            else{
                sent = rate;
                temp = temp - rate;
            }
        }
        else{
            sent = 0;
        }
        
        if(r == -1){
           cout<<"\t"<<a[i]<<"\t\tDiscarded \t"<<sent<<"\t\t"<<temp<<endl;
        }
        else{
            cout<<"\t"<<a[i]<<"\t\t"<<r<<"\t\t"<<sent<<"\t\t"<<temp<<endl;
        }
        
    }
}
