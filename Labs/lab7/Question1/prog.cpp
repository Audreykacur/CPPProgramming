//
// Created by Audrey Kacur on 2/22/22.
//

using namespace std;
void evenOdd(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size; i++){
        if(i%2==0){
            arr[i] = 1;
        }else{
            arr[i] = -1;
        }
    }
}