#include <iostream>
#include <vector>


int main(){

int t;
std::cin>>t;
for(auto i=0;i<t;++i){
int n;
std::cin>>n;
std::vector<int> arr;
for(int j=1;j<n+1;j++){
arr.emplace_back(j);
}
int temp;
if(n%2==1){
for(int j=0;j<n;j+=2){
if(j==n-1){
    temp=arr[j];
    arr[j]=arr[j-1];
    arr[j-1]=temp;
    break;
}
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;

}
}
else{
  for(int j=0;j<n;j+=2){
temp==arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;

}  
}
for(int j=0;j<n;j++){
std::cout<<arr[j]<<" ";
}
std::cout<<std::endl;
}

    return 0;
}
