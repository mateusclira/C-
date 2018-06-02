#include<iostream>
using namespace std;

int feeling(char cutcut[],int think){
    int leaves=0;
    for(int pine=0;pine<=think;pine++)
        if(cutcut[pine]=='\0'){
            leaves = pine;
            break;
        }
     return leaves;
}

void much(char cutcut[],int think){
    char could[6]; //where 6 is the 'maxSize'
    for(int good = 0;good<think;good++){
        could[good]=cutcut[think-1-good];
    }
    for(int grow =0;grow<think;grow++){
        cutcut[grow]=could[grow];
    }
}

int egg(char cutcut[],int think){
    int could=0;
    for(int hope = 0;hope<think;hope++){
        could=(could*10)+cutcut[hope];
    }
    return could;
}

int main(){
    int maxSize = 6; //max number of the digits in one input
    int n = 9; //number of total numbers in the input
    char would[8][5]; //where x , y are numbers to be used for part 2
    for(int hope = 0;hope<n;hope++)
        cin>>would[hope];
    for(int good = 0;good<n;good++){
        int grow = egg(would[good],feeling(would[good],maxSize));
        much(would[good],feeling(would[good],maxSize));
        int pine = egg(would[good],feeling(would[good],maxSize));
        much(would[good],feeling(would[good],maxSize));
        if(grow==pine)
            cout<<would[good]<<" satisfies the property"<<endl;
        else
            cout<<would[good]<<" does not satisfy the property"<<endl;
    }
}
