// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int findUniqenumber(int arr[],int n){
// // // // //   int ans = 0;
// // // // //   for (int i = 0;i<n;i++)
// // // // //   {
// // // // //     ans = ans ^ arr[i];
// // // // //   }
  
// // // // //   return ans;

// // // // // }



// // // // // int main (){
// // // // //    int arr[] = {4,4,6,6,7,7,8,};
// // // // //     int n = 7;
// // // // //     int ans = findUniqenumber(arr,n);

// // // // //     cout << "ans: " << ans <<endl;



// // // // //     return 0;
// // // // // }





// #include<iostream>
//  using namespace std;
// int finduniqenumber(int arr[],int n){
//      int ans = 0;
//     for (int i =0;i<n;i++)
//    {
//        ans = ans ^ arr[i];
//      }
//  return ans;   
//  }


//  int main(){
// int arr[] = {10,20,10,30,30,40,40};
// int n = 7;
// int ans = finduniqenumber(arr,n);
//  cout << "ans :" << ans << endl;


//    return 0;
// }



// // // // file method



// // // #include<iostream>

// // // using namespace std;
// // // int countingNumber(int arr[],int n){
// // //   int zerocount= 0;
// // //   int onecount = 0;
// // //   for (int i =0;i<n;i++)
// // //   {
// // //     if (arr[i] == 0)
// // //     {
// // //       zerocount++;
// // //     }
// // //    else if (arr[i] == 1)
// // //     {
// // //       onecount++;
// // //     }
    
// // //   }
// // //   fill(arr, arr + zerocount, 0);
// // //   fill(arr + zerocount, arr + n, 1 ); 

  
// // // }



// // // int main(){

// // // int arr[] = {1,0,1,0,1,1,0,1};
// // // int n = 8;
// // // countingNumber(arr,n);

// // // for (int i = 0; i<n; i++)
// // // {
// // //   cout << arr[i] << " " ;
// // // }


// // //   return 0;
// // // }




// // //  #include<iostream>
// // // using namespace std;

// // // void printallpare(int arr[],int n){
// // //   for (int i = 0; i<n ; i++)
// // //   {
// // //     for (int j = 0; j<n; j++)
// // //     {
// // //       cout << arr[i] << ", " << arr[j] << endl;
// // //     }
    
// // //   }
// // // }

// // // int main (){
// // //   int arr [] = {10,20,30,40};
// // //   int n = 4;
// // //   printallpare(arr,n);
// // //   return 0;
// // // }



// //  #include<iostream>
// // using namespace std;

// // void printallpare(int arr[],int n){
// //   for (int i = 0; i<n ; i++)
// //   {
// //     for (int j = i; j<n; j++)
// //     {
// //       cout << arr[i] << ", " << arr[j] << endl;
// //     }
    
// //   }
// // }

// // int main (){
// //   int arr [] = {10,20,30,40};
// //   int n = 4;
// //   printallpare(arr,n);
// //   return 0;
// // }



// #include<iostream>
// using namespace std;
// bool findtarget(int arr[],int n, int target){
//  for (int i =0;i<n;i++)
//  {
//   for (int j = 0;j<n;j++)
//   {
//     if (arr[i] + arr[j] == target)
//     {
//       return true;
//     }
    
//   }
  
//  }
 
//  return false;

// }



// int main (){
//  int arr [] = {10,20,30,40};
//  int n = 4;
//  bool ans = findtarget(arr,n,60);
//  if (ans == true)
//  {
//   cout << "ans is found" << endl;
//  } else{
//   cout << "ans is not found" << endl;
//  }
 

 
 
// return 0;
 
 


// }






// #include<iostream>
// using namespace std;
// void printalltriplpar(int arr[],int n){
//   int count = 0;
//   for (int i =0;i<n; i++)
//   {
//     for (int j= 0 ;j<n; j++)
//     {
//       for (int k =0;k<n; k++)
//       {
//         cout << arr[i] << " ," << arr[j] << "," << arr[k] << endl;
//         count ++;
//       }
      
//     }
    
//   }
//   cout << "total number of " << count <<endl;
// }
// int main(){
// int arr[] = {10,20,30,40};
// int n =4;
// printalltriplpar(arr,n);
// return 0 ;



// }



// #include<iostream>
// using namespace std;

// void  countnumber(int arr[],int n){
//   int zero = 0;
//   int one = 0;
//   for (int i =0;i<n;i++)
//   {
//     if (arr[i] == 0)
//     {
//       zero++;
//     }
//     if (arr[i] == 1)
//     {
//       one++;
//     }
    
//   }
//   int i = 0;
//   for (; i<zero;i++)
//   {
//     arr[i] = 0;
//   }
//   for (; i<n; i++)
//   {
//     arr[i] = 1; 
//   }
  
// }
// int main(){
//   int arr[] = {1,0,1,0,0,1};
//   int n = 6;
//   countnumber(arr,n);
//   for (int i =0;i<n;i++)
//   {
//     cout << arr[i] << " " ;
//   }
//   return 0 ;
// }


#include <iostream>
using namespace std;

bool chektwosum(int arr[],int n , int traget){
     for (int i =0;i<n;i++)
     {
      for (int j =0;j<n;j++)
      {
        if (arr[i] + arr[j] == traget)
        {
          cout << arr[i] <<" " << arr[j] << " "  << endl;
        }
        
      }
      
     }
    return  false; 
}
int main(){

  int arr[] = {10,5,15,20,30};
  int n = 5;
  bool ans = chektwosum(arr,n,35);
  return 0;
}
