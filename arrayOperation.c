// Online C compiler to run C program online
//#include <stdio.h>

// int main() {
//     int arr[] = {5,6,7,8.9};
    
//     int size = sizeof(arr)/sizeof(arr[0]);
    
//     for(int i = 0; i < size; i++){
//         printf("%d \n", arr[i]);
//     }
    
//     return 0;
// }

//void main(){

 //   int size;
  //  printf("Enter size of array");
   // scanf("%d", &size);
    
    //int arr[size];

    // int size = sizeof(arr)/sizeof(arr[0]);
    //for (int i = 0; i < size; i++)
    //{
      //  int input;
        //printf("Enter array element :");
        //scanf("%d", &input);

        //arr[i] = input;
    //}

   // for(int i = 0; i < size; i++){
     //   printf("%d \n", arr[i]);
    //} 
//}
 #include<stdio.h>
 void main (){
    int array[] = {22,33,58,2,6,9};
    int size = sizeof(array)/sizeof(array[0]);
    int i;
     for (i = 0; i < size; i++)
     { 
        printf("%d \n",array[i]);
     }
     
 }
