#include <iostream>
#include <algorithm>
int main(){
int t;
std::cin>>t;
for(int i=0;i<t;i++){
int a,b,c,d;
std::cin>>a>>b>>c>>d;
if((std::max(a,b)<std::min(c,d))||std::min(a,b)>std::max(c,d)){
    std::cout<<"NO"<<'\n';
}
else{
    std::cout<<"YES"<<'\n';
}

}


    return 0;
}