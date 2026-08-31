#include <iostream>
#include <cstdint>

int main(){
int t;
std::cin>>t;

for(int i=0;i<t;++i){
int n;
std::cin>>n;
int msb=63-__builtin_clzll(n);
long long ans=(1LL<<msb)-1;
std::cout<<ans<<'\n';
}
    return 0;
}