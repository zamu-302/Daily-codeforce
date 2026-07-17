#include <iostream>
#include <vector>

int main(){
int t;
std::cin>>t;
for(int i=0;i<t;++i){
    int n;
    std::cin>>n;
    int curr=1;
    int j=1;
    while(curr<n){
        curr+=((2*j)+1);
        j+=1;
    };
    std::cout<<j<<'\n';
}

}