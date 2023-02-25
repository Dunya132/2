#include <iostream>
#include <map>

using namespace std;

int main(){
  map<int, int>homes;
  homes[0] = 0;
  int quaHomes; 
  cout<<"Введите количество домов ";
  cin>>quaHomes;
  for (int i = 1; i < quaHomes + 1; i++){
    cout<<"Введите количество проживающих людей в доме №"<<i<<" ";
    int people;
    cin>>people;
    homes[i] = people;
  }
  cout<<"Выберите операцию ";
  int o;
  cin>>o; 
  if (o == 2){
    cout<<"Введите количество проживающих людей в новом доме ";
    int people2;
    cin>>people2;
    homes[quaHomes + 1] = people2;
  }
  if (o == 0){
    cout<<"Введите номер дома ";
    int n;
    cin>>n;
    cout<<"Количество людей в этом доме: "<<homes[n];
    }
  if (o == 1){
    cout<<"Введите дом который хотите удалить ";
    int d;
    cin>>d;
    homes.erase(d);
  }
}