#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vl vector<ll> 
#define vll vector<pair<ll,ll>>
#define vvl vector<vector<ll>> 
#define sz(x) int(x.size())

int main(){
    float x1,x2,y1,y2;
    float F,I;
    cout<<"Maximum Shear Stress in T-section"<<endl;
    cout<<endl;
    cout<<"x1 (mm)"<<endl;
    cin>>x1;
    cout<<"x2 (mm)"<<endl;
    cin>>x2;
    cout<<"y1 (mm)"<<endl;
    cin>>y1;
    cout<<"y2 (mm)"<<endl;
    cin>>y2;
    cout<<"Vertical Shear Force: (N)"<<endl;
    cin>>F;
    cout<<"Moment of Inertia: (kg.mm^2)"<<endl;
    cin>>I;
    float a1,a2;
    a1=y1*x1;
    a2=y2*x2;
    float Y=((a1*(y2+y1/2))+(a2*(y2/2)))/(a1+a2);
    float A2=x2*(y2-Y);
    float Y1=y2+y1/2-Y;
    float Y2=(y2-Y)/2;
    cout<<"Maximum Shear stress:"<<endl;
    cout<<F*((a1*Y1)+(A2*Y2))/(I*x2) <<" "<< "N/(mm)^2";

    return 0;
}
