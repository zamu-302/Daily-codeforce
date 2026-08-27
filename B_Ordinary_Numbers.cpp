#include <iostream>
#include<cmath>

int main(){
int t;
std::cin>>t;

for(int i=0;i<t;i++){
int n;
std::cin>>n;
if(n<10){
    std::cout<<n<<'\n';
}
else{
int num=n;
int digit=0;
while(num>=10){
    num/=10;
    digit++;
 }
 int additional=std::floor((9*n)/((std::pow(10,digit+1))-1));
 
std::cout<<(digit*9)+additional<<'\n';
}
 

}





    return 0;
}