#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n<=8){
            if(n==1)
                cout << "OX......" << endl;
            else if(n==2)
                cout << "O.X....." << endl;
            else if(n==3)
                cout << "O..X...." << endl;
            else if(n==4)
                cout << "O...X..." << endl;
            else if(n==5)
                cout << "O....X.." << endl;
            else if(n==6)
                cout << "O.....X." << endl;
            else if(n==7)
                cout << "O......X" << endl;
            else
                cout << "O......." << endl;
            cout << "XXXXXXXX" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
        }
        else if(n<=16 && n>8){
            cout << "........" << endl;
            if(n==9)
                cout << "OXXXXXXX" << endl;
            else if(n==10)
                cout << "O.XXXXXX" << endl;
            else if(n==11)
                cout << "O..XXXXX" << endl;
            else if(n==12)
                cout << "O...XXXX" << endl;
            else if(n==13)
                cout << "O....XXX" << endl;
            else if(n==14)
                cout << "O.....XX" << endl;
            else if(n==15)
                cout << "O......X" << endl;
            else
                cout << "O......." << endl;
            cout << "XXXXXXXX" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
        }
        else if(n<=24 && n>16){
            cout << "........" << endl;
            cout << "........" << endl;
            if(n==17)
                cout << "OXXXXXXX" << endl;
            else if(n==18)
                cout << "O.XXXXXX" << endl;
            else if(n==19)
                cout << "O..XXXXX" << endl;
            else if(n==20)
                cout << "O...XXXX" << endl;
            else if(n==21)
                cout << "O....XXX" << endl;
            else if(n==22)
                cout << "O.....XX" << endl;
            else if(n==23)
                cout << "O......X" << endl;
            else
                cout << "O......." << endl;
            cout << "XXXXXXXX" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
        }
        else if(n<=32 && n>24){
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            if(n==25)
                cout << "OXXXXXXX" << endl;
            else if(n==26)
                cout << "O.XXXXXX" << endl;
            else if(n==27)
                cout << "O..XXXXX" << endl;
            else if(n==28)
                cout << "O...XXXX" << endl;
            else if(n==29)
                cout << "O....XXX" << endl;
            else if(n==30)
                cout << "O.....XX" << endl;
            else if(n==31)
                cout << "O......X" << endl;
            else
                cout << "O......." << endl;
            cout << "XXXXXXXX" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
        }
        else if(n<=40 && n>32){
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            if(n==33)
                cout << "OXXXXXXX" << endl;
            else if(n==34)
                cout << "O.XXXXXX" << endl;
            else if(n==35)
                cout << "O..XXXXX" << endl;
            else if(n==36)
                cout << "O...XXXX" << endl;
            else if(n==37)
                cout << "O....XXX" << endl;
            else if(n==38)
                cout << "O.....XX" << endl;
            else if(n==39)
                cout << "O......X" << endl;
            else
                cout << "O......." << endl;
            cout << "XXXXXXXX" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
        }
        else if(n<=48 && n>40){
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            if(n==41)
                cout << "OXXXXXXX" << endl;
            else if(n==42)
                cout << "O.XXXXXX" << endl;
            else if(n==43)
                cout << "O..XXXXX" << endl;
            else if(n==44)
                cout << "O...XXXX" << endl;
            else if(n==45)
                cout << "O....XXX" << endl;
            else if(n==46)
                cout << "O.....XX" << endl;
            else if(n==47)
                cout << "O......X" << endl;
            else
                cout << "O......." << endl;
            cout << "XXXXXXXX" << endl;
            cout << "........" << endl;
        }
        else if(n<=56 && n>48){
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            if(n==49)
                cout << "OXXXXXXX" << endl;
            else if(n==50)
                cout << "O.XXXXXX" << endl;
            else if(n==51)
                cout << "O..XXXXX" << endl;
            else if(n==52)
                cout << "O...XXXX" << endl;
            else if(n==53)
                cout << "O....XXX" << endl;
            else if(n==54)
                cout << "O.....XX" << endl;
            else if(n==55)
                cout << "O......X" << endl;
            else
                cout << "O......." << endl;
            cout << "XXXXXXXX" << endl;
        }
        else{
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            cout << "........" << endl;
            if(n==57)
                cout << "OXXXXXXX" << endl;
            else if(n==58)
                cout << "O.XXXXXX" << endl;
            else if(n==59)
                cout << "O..XXXXX" << endl;
            else if(n==60)
                cout << "O...XXXX" << endl;
            else if(n==61)
                cout << "O....XXX" << endl;
            else if(n==62)
                cout << "O.....XX" << endl;
            else if(n==63)
                cout << "O......X" << endl;
            else
                cout << "O......." << endl;
        }
    }
    return 0;
}
