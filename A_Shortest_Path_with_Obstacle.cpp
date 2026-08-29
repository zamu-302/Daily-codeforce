#include <iostream>
#include <algorithm>
int main(){
int t;
std::cin>>t;
for(auto i=0;i<t;++i){
int xa,ya;
int xb,yb;
int xf,yf;

std::cin>>xa>>ya;
std::cin>>xb>>yb;
std::cin>>xf>>yf;

int ans=0;
if((xa==xb && xa==xf && std::max(ya,yb)>yf && std::min(ya,yb)<yf)||(ya==yb&& ya==yf && std::max(xa,xb)>xf &&std::min(xa,xb)<xf)){
    ans+=2;
}
ans+=(abs(xb-xa)+abs(yb-ya));
std::cout<<ans<<'\n';


}
}