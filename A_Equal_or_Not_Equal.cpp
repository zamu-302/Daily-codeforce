#include <iostream>
#include <algorithm>
#include <string>

int main(){

    int t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::string str;
        std::cin>>str;
        std::string left=str.substr(0,str.length()-1);
        std::string right=str.substr(1);
        std::reverse(right.begin(),right.end());
       if(right==left){
        std::cout<<"YES"<<'\n';
       }
       else{
        std::cout<<"NO"<<'\n';
       }
    }


}