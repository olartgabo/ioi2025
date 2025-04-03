#include <bits/stdc++.h>
#define debug(x) cerr << #x << " = " << (x) << endl;

using namespace std;
int main(){
    int row =5;
    int column=5;
    pair<int,int> cords;
    vector<vector<int>> grid(row, vector<int>(column));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>grid[i][j];
            if(grid[i][j]==1){
                cords={i,j};
            }
        }
    }
    /*
    for(auto x : grid){
        for(auto y :x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    */
   //centro es 2 2
   int y=cords.first;
   int x=cords.second;
   int movx=abs(2-x);//2
   int movy=abs(2-y);//1
   int counter=movy+movx;
   cout<<counter;
   //while(x!=2&&y!=2){}
   //debug(cords.second);
   //debug(cords.first);
   
   

    return 0;
}