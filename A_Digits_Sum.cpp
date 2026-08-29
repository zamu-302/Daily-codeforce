#include <iostream>
#include <cmath>
using namespace std;


int main(){
int t;
cin>>t;
for(int i=0;i<t;++i){
auto num=0;
cin>>num;
auto ans=0;
if(num%10==9){
    ans=floor(num/10)+1;
}
else{
    ans=floor(num/10);
}
cout<<ans<<endl;

}

}