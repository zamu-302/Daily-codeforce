#include <iostream>
using namespace std;
int main(){


    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int count=0;
        for(int j=0;j<n*2;j++){
            int num;
            cin>>num;
            if(num%2==0){
                count++;
            }
        }
        if (count==n){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}