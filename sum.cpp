#include<iostream>
using namespace std;
void sum(int arr[], int target){


    for (int  i = 0; i < target; i++)
    {
       for (int  j = 1; j < target; j++)
       {
            if ((arr[i]+arr[j])==target)
            {
               cout<<"["<<i<<","<<j<<"]";
               break;
            }
            
       }
       
    }
    



}
int main(){
                     
int arr[5]={4,5,7,2,1};
int target=8;

sum(arr,target);


return 0;
}