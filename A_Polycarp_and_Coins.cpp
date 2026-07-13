#include <iostream>

int main(){

// based on this my idea is to divide it to 3?? because when we divide something we have 2 of one number + one number
int t;
std::cin>>t;
for(int i=0;i<t;i++){
int x;
std::cin>>x;
if(x%3==0){
    std::cout<<x/3<<" "<<x/3<<std::endl; 
}
else if(x%3==1){
    std::cout<<(x/3)+1<<" "<<x/3<<std::endl; 
    
}
else{
    std::cout<<x/3<<" "<<(x/3)+1<<std::endl; 
    continue;
}

}


}