#include <iostream>
#include<vector>
#include <algorithm>


int main(){

int t;
std::cin>>t;

for(auto i=0;i<t;i++){
int n;
std::cin>>n;
std::vector<long long> nums(n);
for(auto j=0;j<n;j++){
    std::cin>>nums[j];
}
long long ans=0;
for(auto k=0;k<n-1;k++){
ans=std::max(ans,(nums[k]*nums[k+1]));
}
std::cout<<ans<<'\n';



}


    return 0;
}