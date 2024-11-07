// // #include<iostream>
// // using namespace std;

// // bool findtraget(int arr[],int n, int traget){
// //     for (int i =0;i<n;i++)
// //     {
// //       if (arr[i] == traget)
// //       {
// //         return true;
// //       }
      
// //     }
// //     return false;
// // }
// // int main(){
// //     int arr[] = {10,20,30,40,50,60};
// //     int n = 6;
// //     int traget = 70;
// //     int ans = findtraget(arr,n,traget);
// //     cout << "ans" << ans <<endl;
// //     return 0;
// // }

//  #include<iostream>
// using namespace std;
// int  Maxnumber(int arr[],int n){
//    int maxAns = INT_MIN;
//      for (int i =0;i<n;i++)
//      {
//        maxAns = max(maxAns,arr[i]);
//     }
//     return maxAns;
    
// }
//  int main(){
//     int arr[] = {10,6,66,77,10};
//      int n = {5};
//      int ans = Maxnumber(arr,n);
//     cout << " max number in arr" << ans <<endl;
//     return 0;
//  }
// //  #include <iostream>
// //   using namespace std;
// // int maxNumber ( int arr[],int size){
// //     int maxAns = INT_MIN;
// //     for ( int i =0;i<size;i++)
// //     {
// //          maxAns = max(maxAns,arr[i]);
// //    }
// //      return maxAns;
// //  }
// //  int main(){
// //    int arr[] = {10,20,40,78,90,78,5};
// //     int size = {7};
// //     int ans = maxNumber(arr,size);
// //     cout << "max number of arr is :" << ans <<endl;

// //      return 0;


// //   }

// #include <iostream>
// using namespace std;

// int findmaxnumber(int arr[],int n){
//    int maxAns = INT_MIN;
//    for (int i =0;i<n;i++)
//    {
//       maxAns = max(maxAns,arr[i]);
//    }
//    return maxAns;
   
// }
// int main(){
//    int arr[] = {10,22,33,11,133,44,44};
//    int n = {7};
//    int ans = findmaxnumber(arr,n);
//    cout << "maxnumber is "<< ans << endl;
//    return 0; 
// }



// #include<iostream>
// using namespace std;

// bool findtraget(int arr[],int n,int traget){
//        for (int i =0;i<n;i++)
//        {
//          if (arr[i] == traget)
//          {
//             return true;
//          }
         
//        }
//      return false;

// }
// int main (){
//    int arr[] = {10,3,4,66,77,88};
//    int n =6;
//    int traget = 56;
//       int ans = findtraget(arr,n,traget);
//       if (ans == true)
//       {
//          cout << "traget is found" <<endl;
//       }else{
//          cout <<"traget is not found" <<endl;
//       }
      


//    return 0;
// }





// #include<iostream>
// using namespace std;
// bool findtraget(int arr[],int n,int traget){
//    for (int i=0;i<n;i++)
//    {
//       if (arr[i] == traget)
//       {
//          return true;
//       }
      
//    }
//    return false;
// }

// int main(){
//    int arr[] = {10,30,40,50,60};
//    int n = {5};
//    int traget = 50;
//    int ans = findtraget(arr,n,traget);
//    if (ans == true)
//    {
//       cout << "traget is found" << ans <<endl;
//    }else{
//       cout << "traget in not found" <<endl;
//    }
//    return 0;
// }


// #include <iostream>
// using namespace std;

// int findmaxnumber(int arr[],int n){
//    int maxAns = INT_MIN;
//    for (int i=0;i<n;i++)
//    {
//       maxAns = max(maxAns,arr[i]);
//    }
//    return maxAns;
// }
// int main(){
//    int arr[] ={10,22,33,22,1,4,5};
//    int n = {7};
//    int ans = findmaxnumber(arr,n);
//    cout << "maxnumber is " << ans <<endl;
//    return 0; 
// }

// #include<iostream>
// using namespace std;

// void findoanda(int arr[],int n){
//    int find0 =0;
//    int find1 = 0;
//    for (int i =0;i<n;i++)
//    {
//       int currentelement = arr[i];
//       if (currentelement == 0)
//       {
//       find0++;
//       }
//       if (currentelement == 1)
//       {
//          find1++;
//       }
      
//    }
//    cout <<"find 0 is" << find0 <<endl;
//    cout <<"find 1 is" << find1 <<endl;
// }
// int main(){
//    int arr[] = {1,0,2,0,1,0,0};
//    int n = {7};
//    findoanda(arr,n);
//    return 0;
// }


#include<iostream>
using namespace std;
void extermprint(int arr[],int n){
   int i =0;
   int j = n-1;
   while (i<=j)
   {
      cout << arr[i] <<endl;
      i++;
      cout << arr[j] <<endl;
      j--;
   }
   
}
int main(){
   int arr [] = {10,20,30,40,50,60};
   int n ={6};
   extermprint(arr,n);
   return 0 ;
}