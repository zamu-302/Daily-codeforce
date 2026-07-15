#include <iostream>
#include <vector>


int main(){

int t;
std::cin>>t;
std::vector<int> ans;
int curr=1;
for(int i=1;i<1001;i++){
while(curr%10==3|| curr%3==0){
    curr+=1;
}
ans.push_back(curr);
curr++;
}
for(int i=0;i<t;i++){
    int k;
    std::cin>>k;
    std::cout<<ans[k-1]<<'\n';
    
}




    return 0;
}