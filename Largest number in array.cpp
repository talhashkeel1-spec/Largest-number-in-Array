#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {7,5,4,6,8,2};
    cout<<"Largest Number in Array"<<endl;
    int largest = 0;   // largest = arr[0];
    for(int i=0; i<6; i++){
        if(arr[i]>largest){ // largest = max(arr[i], largest);
            largest=arr[i];
        }
    }
    cout<<largest;
    cout<<endl;
        return 0;
}
