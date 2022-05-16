#include<iostream>
using namespace std;

int main(){

    int pigaWeight;
    cout << "请输入小猪a的体重:";
    cin >> pigaWeight;
    cout << endl;
    int pigbWeight;
    cout << "请输入小猪b的体重:";
    cin >> pigbWeight;
    cout << endl;
    int pigcWeight;
    cout << "请输入小猪c的体重:";
    cin >> pigcWeight;
    cout << endl;
    if(pigaWeight<=0||pigbWeight<=0||pigcWeight<=0){
        cout << "input invalid: weight should be positive" << endl;
    }
    if (pigaWeight > pigbWeight){
        if (pigaWeight > pigcWeight){
            if (pigbWeight > pigcWeight){
                cout << "小猪a最重,体重为:" << pigbWeight << endl;
            }else if(pigbWeight == pigcWeight){
                cout << "小猪a最重,体重为:" << pigaWeight << endl;
            }else{
                cout << "小猪c最重,体重为:" << pigcWeight << endl;
            }
        }else if(pigaWeight < pigcWeight){
            cout << "小猪c最重,体重为:" << pigcWeight << endl;
        }else{
            cout << "小猪a和小猪c一样重,体重为:" << pigaWeight << endl;
        }
    }else if(pigaWeight < pigbWeight){
        if (pigaWeight < pigcWeight){
            if(pigbWeight < pigcWeight){
                cout << "小猪c最重,体重为:" << pigcWeight << endl;
            }else if(pigbWeight == pigcWeight){
                cout << "小猪b和小猪c一样重,体重为:" << pigbWeight << endl;
            }else{
                cout << "小猪b最重,体重为:" << pigbWeight << endl;
            }
        }else{
            cout << "小猪b最重,体重为:" << pigbWeight << endl;
        }
    }else if(pigaWeight == pigcWeight){
        cout << "三只小猪一样重,体重为:" << pigbWeight << endl;
    }else if(pigaWeight > pigcWeight){
        cout << "小猪a和小猪b一样重,体重为:" << pigbWeight << endl;
    }else{
        cout << "小猪c最重,体重为:" << pigcWeight << endl;
    }
    return 0;
}