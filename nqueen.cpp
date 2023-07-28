// Bhaskor Roy
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

#define N 8

int cboard[N][N];

void print(int cboard[N][N],int n){
for(int i=0;i<N;i++){

    for(int j=0;j<N;j++){
        cout<<cboard[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;


}

bool safe(int cboard[8][8],int row,int col,int n){
cout<<" for col:= "<<col+1<<endl;
for(int i=0;i<=col-1;i++){
    if(cboard[row][i]==1){
        cout<<"nO for same row"<<endl;
        return false;

    }
}
for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
    if(cboard[i][j]==1){
        cout<<"no for upper diagonal"<<endl;

        return false;

    }
}
for(int i=row+1,j=col-1;i<n && j>=0;i++,j--){
    if(cboard[i][j]==1){
        cout<<"no for lower diagonal"<<endl;

        return false;


    }

}
return true;


}



int nqueen(int cboard[N][N],int col,int n){
if(col>=n){
    print(cboard,N);
    return true;

}
for(int row=0;row<n;row++){

    if(safe(cboard,row,col,n)){
        cboard[row][col]=1;

    print(cboard,n);
        if(nqueen(cboard,col+1,n)){
            return true;

            print(cboard,n);
        }


    }
    cboard[row][col]=0;
}
return false;




}



int main(){


cout<<nqueen(cboard,0,N)<<endl;
print(cboard,N);


}
