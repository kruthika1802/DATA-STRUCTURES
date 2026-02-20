#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int choice,x,key,n;
    do{
        cout<<"\n\n-----VECTOR OPERATIONS MENU-----";
        cout<<"\n1.Insert Elements";
        cout<<"\n2.Display  Elements";
        cout<<"\n3.Sort Elements";
        cout<<"\n4.Search Elements";
        cout<<"\n5.Exit";
        cout<<"\n6.Delete";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter the number of elements to insert :";
            cin>>n;
            cout<<"enter the elements:";
            for(int i=0;i<n;i++){
            cin>>x;
            
            v.push_back(x);
            }
            break;
            case 2:
            if(v.empty()){
            cout<<"vector is empty";
            }
            else{
            cout<<"vector elements:";
            for(vector<int>::iterator it=v.begin();it!=v.end();it++){
                cout<<*it<<" ";

            }
        }
break;
case 3:
if(v.empty()){
    cout<<"vector is empty,cannot sort";

}
else{
    sort(v.begin(),v.end());
    cout<<"vector sorted successfully";
}
break;
case 4:
if(v.empty()){
     cout<<"vector is empty,cannot search";
}
else{
    cout<<"enter element to search:";
    cin>>key;
    vector<int>::iterator pos=find(v.begin(),v.end(),key);
    if(pos !=v.end()){
        cout<<"element fount at position"
        <<(pos-v.begin())+1;
    }
    else
    {
        cout<<"element not found";

    }
    }
    break;
    case 5:
    cout<<"exiting program...";
    break;
    case 6:
cout<<"poped element";
    break;
    default:
    cout<<"invalid choice!try again";

}

}while(choice!=6);
return 0;

        }
    
