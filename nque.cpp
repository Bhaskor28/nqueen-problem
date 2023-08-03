#include<bits/stdc++.h>

using namespace std;

int x[100];
//int a[4][4];

void display(int n){

for(int i=1;i<=n;i++){
    cout<<x[i]<<" ";
}
cout<<endl;
}

bool place(int k,int i){
for(int j=1;j<k;j++){
    if((x[j]==i) || (abs(x[j]-i)==abs(j-k)))
        return false;


}
    return true;


}



void nqueen(int k,int n){

for(int i=1;i<=n;i++){
    if(place(k,i)){

        x[k]=i;
        if(k==n){
                display(n);
        }
        else
            nqueen(k+1,n);

    }
    //cout<<endl;
    //cout<<x[i]<<" ";

}


}

int main(){

int k=1,n;
cin>>n;


clock_t st,et;
st=clock();
nqueen(k,n);
et=clock();
double ex=(double)(et-st)/CLOCKS_PER_SEC;
cout<<ex<<endl;

return 0;

}
