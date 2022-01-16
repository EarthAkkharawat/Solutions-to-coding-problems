#include <iostream>
// #include <vector>
#include <string>
using namespace std;


int main(){

    int r,c,R;
    cin >> r>>c;
    cin>>R;
    int arr[r][c];
    for (int i = 0; i< r;++i){
        for (int e = 0; e< c;++e){
            cin>> arr[i][e];
        }
    }
    cout<<"---------------------------"<<endl;
    for (int i = 0; i< (sizeof(arr)/sizeof(arr[0]));++i){
        for (int e= 0 ;e<(sizeof(arr[0])/sizeof(arr[0][0]));++e){
            cout<<arr[i][e]<<endl;
        }
        cout<<"________________"<<endl;

    }
    for (int j =0; j<R;++j){
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        if ((r1>r2 || c1>c2) && (r1>r || c1>c)){
            cout<<"INVALID"<<endl;
        } else if (r1>r || c1>c){
            cout<<"OUTSIDE"<<endl;
        } else if (r1>r2 || c1>c2){
            cout<<"INVALID"<<endl;
        } else {
            if (r2 > r) r2 = r;
            if (c2 > c) c2 = c;
            if (r1<0) r1=0;
            if (c1<0) c1=0;
            int max = arr[r1-1][c1-1];
            for (int i = r1; i <= r2; i++){
                for (int e=c1; e<= c2;e++){
                    if (arr[i-1][e-1]> max){
                        max = arr[i-1][e-1];
                    }
                }
            }
            cout<<max<<endl;
        }
    }

    // for (int i=0;i<=vec.size();i++){
    //     for (int e=0;e<=v.size();e++){
    //         cout<<vec[i][e]<<"|";
    //     }
        
    // }
}  
    


// vector<vector<int>> vec;
    // vector<int> v;
    // for (int i = 0; i<= r;i++){
    //     string row;
    //     getline(cin, row);
    //     string tem = "";
    //     for (int i = 0; i<= row.size();i++){
    //         if (row[i] == ' '){
    //             int temm = stoi(tem);
    //             v.push_back(temm);
    //             tem = "";
    //         }else{
    //             tem += row[i];
    //         }
    //     }
    //     int temm = stoi(tem);
    //     v.push_back(temm);

    //     vec.push_back(v);
    //     v.clear();