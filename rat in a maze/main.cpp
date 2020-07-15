#include <iostream>

using namespace std;
#define n 5


bool issafe(int maze[n][n],int x,int y){

if(x<n && x>=0 && y<n &&y>=0 && maze[x][y]==1){
    return true;
}
return false;
}

bool solvemazeutil(int maze[n][n],int x,int y,int sol[n][n]){

if(x==n-1 && y==n-1){
        sol[x][y]=1;
    return true;
}

if(issafe(maze,x,y)){
    sol[x][y]=1;

if(solvemazeutil(maze,x+1,y,sol)==true)
return true;

if(solvemazeutil(maze,x,y+1,sol)==true)
return true;

}
sol[x][y]=0;
return false;
}


void solvemaze(int maze[n][n]){

int sol[n][n];

for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
            sol[i][j]=0;
}
}

if(!solvemazeutil(maze,0,0,sol)){
    cout << "no path";
}
else{
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
            cout << sol[i][j];
}
cout << endl;
}
}

}
int main()
{
    int maze[n][n];
for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
            cin >> maze[i][j];
}
}
solvemaze(maze);





}
