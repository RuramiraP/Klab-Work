
#include<iostream>
using namespace std;
//mugema james
int main()
{
    //the user enter price of items in array then the system perfom all calculations
    string item[6]={"bike","tv","album","book","phone","computer"};
    int price[6];
    int cheap=0;
    int expe=0;
    int sum=0;
    int sub=0;
    cout<<"the user enter amount of produtcs in this system\n";
    for(int i=0;i<6;i++){
            cin>>price[i];
    }
    for(int i=0;i<6;i++){
        cout<<item[i]<<":"<<price[i]<<"\n";
    }
    cheap=price[0];
    expe=price[0];
    for(int i=0;i<6;i++){
   if(price[i]>expe)
    {
        expe=price[i];
    }
    if(price[i]<cheap)
    {
        cheap=price[i];
    }
    sum+=price[i];
    if(price[i]>10)
    {
        sub=sub+price[i]>10;

    }

    }
        cout<<"the expensive is:"<<expe<<"\n";
        cout<<"the cheapest is:"<<cheap<<"\n";
        cout<<"the total of all products:"<<sum<<"\n";
        cout<<"the total that are greater than 10:"<<sub<<"\n";
            return 0;

}
