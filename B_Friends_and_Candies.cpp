#include <iostream>
#include <vector>

int main(){

int t;
std::cin>>t;
for(int i=0;i<t;++i){
    int n;
    std::cin>>n;
    std::vector<int> nums(n);
    auto total{0};
    for(int j=0;j<n;++j){
        std::cin>>nums[j];
        total+=nums[j];
    }
    
    if(total%n!=0){
        std::cout<<-1<<'\n';
    }
    else{
        int avg=total/n;
        int ans{0};
        for(int j=0;j<n;++j){
            if(nums[j]>avg){
                ans++;
            }
        }
        std::cout<<ans<<'\n';
    }
    
}

    return 0;
}