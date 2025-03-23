#include <bits/stdc++.h>
using namespace std;
void setNode(vector<int>& tree, int index, int value){
    if(index<tree.size()){
        tree[index]= value;
    }
}

int leftChild(int index, int size){
    int child = 2*index+1;
    return(child<size)?child:-1;
}

int rightChild(int index, int size){
    int child = 2*index+2;
    return(child<size)?child:-1;
}

int parent(int index){
    return(index ==0)?-1:(index-1)/2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    return 0;
}