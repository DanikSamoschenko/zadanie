#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    cout << "Введите I группу крови (1-первая, 2-вторая и т.д.): " << endl;
    cin >> a;
    
    cout << "Введите II группу крови (1-первая, 2-вторая и т.д.): " << endl;
    cin >> b;
    
    if ( a == b){
        cout << "Группы крови полностью совемстимы. Группа крови: " << a << endl;
    }
    else if (a == 1 and (b == 2 or b == 3 or b == 4)){
        cout << "Группу крови 1 можно только отдавать группам 2, 3, 4. Принимать только 1 группу крови." << endl;
    }
    else if (b == 1 and (a == 2 or a == 3 or a == 4)){
        cout << "Группу крови 1 можно только отдавать группам 2, 3, 4. Принимать только 1 группу крови." << endl;
    }
    else if (a == 2 and (b == 1 or b == 4)){
        cout << "Группу крови 2 можно только отдавть группам 2, 4. Принимать только 1 и 2 группы крови." << endl;
    }
    else if (b == 2 and (a == 1 or a == 4)){
        cout << "Группу крови 2 можно только отдавть группам 2, 4. Принимать только 1 и 2 группы крови." << endl;
    }
    else if (a == 3 and (b == 3 or b == 4)){
        cout << "Группу крови 3 можно только отдавть группам 3, 4. Принимать только 1 и 3 группы крови." << endl;
    }
    else if (b == 3 and (a == 3 or a == 4)){
        cout << "Группу крови 3 можно только отдавть группам 3, 4. Принимать только 1 и 3 группы крови." << endl;
    }
    else if (a == 4 and (b == 2 or b == 3 or b == 1)){
        cout << "Группу крови 4 можно только отдавать группе 4. Принимать можно все группы крови." << endl;
    }
    else if (b == 4 and (a == 2 or a == 3 or a == 1)){
        cout << "Группу крови 4 можно только отдавать группе 4. Принимать можно все группы крови." << endl;
    }
    else{
        cout << "Группы крови несовместимы." << endl;
    }
    
    return 0;
}
