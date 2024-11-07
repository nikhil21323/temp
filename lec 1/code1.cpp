// // // // // // // // // // #include<iostream>
// // // // // // // // // // using namespace std;
// // // // // // // // // // int main(){
// // // // // // // // // //   int arr[10] = {10,30,20,5};
// // // // // // // // // //   int brr []  = {10, 5, 4,3};
// // // // // // // // // //   cout << brr[1] <<endl;
// // // // // // // // // //   cout << arr[2] <<endl;
// // // // // // // // // // int arr [3];
// // // // // // // // // //   fill ( arr,arr+3,22);
// // // // // // // // // //   cout << arr[2] <<endl;



// // // // // arr file 
// // // // #include<iostream>
// // // // using namespace std;

// // // // int main(){
// // // //    int arr [3];
// // // //    fill(arr,arr+3,22);
// // // //    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

   
// // // //    return 0;

// // // // }






// // // // // // // // // // int arr[5];
// // // // // // // // // // for (int i=0;i<5;i++)
// // // // // // // // // // {
// // // // // // // // // //     cout << "enter the volue of i"<<endl;
// // // // // // // // // //     cin >> arr[i];
// // // // // // // // // // }
// // // // // // // // // // for (int i=0;i<5;i++)
// // // // // // // // // // {
// // // // // // // // // //     cout << arr[i];
// // // // // // // // // // }

// // // // // // // // // #include<iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // bool findtarget (int arr [],int size,int target){
// // // // // // // // //     for (int i=0;i<size;i++)
// // // // // // // // //     {
// // // // // // // // //         if (arr[i] == target)
// // // // // // // // //         {
// // // // // // // // //             return true;
// // // // // // // // //         }
        
// // // // // // // // //     }
// // // // // // // // //     return false;
// // // // // // // // // }
// // // // // // // // // int main(){
// // // // // // // // //       int arr [] ={10,20,30,40,50};
// // // // // // // // //       int size = 5;
// // // // // // // // //       int target = 30;
// // // // // // // // //       cout << "enter the element" <<endl;
// // // // // // // // //       bool ans = findtarget(arr,size,target);
// // // // // // // // //       cout << "ans :" << ans <<endl; 
      

// // // // // // // // //    return 0;


// // // // // // // // // }

// // // #include<iostream>
// // // using namespace std;

// // // bool findTargatelement(int arr[],int n,int target){
// // //      for (int i =0;i<n;i++)
// // //      {
// // //       if (arr[i] == target)
// // //       {
// // //          return true;
// // //       }
      
// // //      }
// // //      return false;
// // // }



// // // int main (){
// // //     int  arr[] = {10,20,30,40,50,};
// // //     int n = 5;
// // //     int target = 50;
// // //     int ans = findTargatelement(arr, n ,target);
// // //     cout << " ans" << ans <<endl;

// // // }





  #include <iostream>
  using namespace std;
int maxNumber ( int arr[],int size){
    int maxAns = INT_MIN;
    for ( int i =0;i<size;i++)
    {
         maxAns = max(maxAns,arr[i]);
   }
     return maxAns;
 }
 int main(){
   int arr[] = {10,20,40,78,90,78,5};
    int size = {7};
    int ans = maxNumber(arr,size);
    cout << "max number of arr is :" << ans <<endl;

     return 0;


  }

// // // counting ofarr

// // // // // // // // array Q1;

// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // void findElement (int arr[],int size){
// // // // // // //     int find0= 0;
// // // // // // //      int find1 =0;
// // // // // // //      for (int i=0; i<size; i++)
// // // // // // //      {
// // // // // // //         int currentElement = arr[i];
// // // // // // //         if (currentElement == 0)
// // // // // // //         {
// // // // // // //             find0++;
// // // // // // //         }
// // // // // // //         if (currentElement == 1)
// // // // // // //         {
// // // // // // //             find1++;
// // // // // // //         }
        
// // // // // // //      }
// // // // // // //      cout << "tatal 0 element: " << find0 <<endl;
// // // // // // //      cout << "total 1 element :"  << find1 <<endl;
// // // // // // // }



// // // // // // // int main (){
// // // // // // //    int arr[] = {1,0,1,0,1,1,0};
// // // // // // //    int size = 7;
// // // // // // //       findElement(arr,size);



// // // // // // // }

// // // // // // // find element 

// // // // // // #include<iostream>
// // // // // // using namespace std;

// // // // // // void findelement (int arr [],int size){
// // // // // //     int find5 = 0;
// // // // // //     int find4 = 0;
// // // // // //     for (int i=0;i<size;i++)
// // // // // //     {
// // // // // //       int currentelement = arr[i];
// // // // // //       if (currentelement == 5)
// // // // // //       {
// // // // // //         find5++;
// // // // // //       }
// // // // // //       if (currentelement == 4)
// // // // // //       {
// // // // // //         find4++;
// // // // // //       }
      
// // // // // //     }
    
// // // // // //     cout << "find 5 is :" << find5 <<endl;
// // // // // //     cout << "find 4 is :" << find4 <<endl;



// // // // // // }





// // // // // // int main (){
// // // // // //    int arr[] = {5,4,7,5,4,45,5,4,4};
// // // // // //    int size = 9;
// // // // // //    findelement(arr,size);


// // // // // //    return 0;


// // // // // // }




// // // *-> exterem printing *->
//  #include <iostream>
//  using namespace std;
//   void etertElement (int arr[],int size){
//      int i =0;
//      int j = size-1;
//      while (i<=j)
//      {
//         cout << arr[i] <<endl;
//        i++;
//        cout << arr[j] <<endl;
//         j--;
//     }
    
    

//  }


//  int main (){
//  int arr[] = {10,20,30,40,50,60,70};
//  int size =7;
//  etertElement(arr,size);
//  return 0;

//  }



// // // // // #include<iostream>
// // // // // using namespace std;
// // // // //  void arryrevisorder(int arr[],int n){
// // // // //      int i = 0;
// // // // //      int h = n-1;
// // // // //      while (i<h)
// // // // //      {
// // // // //         swap(arr[i],arr[h]);
// // // // //         i++;
// // // // //         h--;
        
// // // // //      }
    

// // // // //  }

// // // // // int main (){

// // // // //    int arr[7] = {10,20,30,40,50,60,70};
    
    
// // // // //  arryrevisorder(arr,n);
// // // // //  for (int i=0;i<n; i++)
// // // // //  {
// // // // //     cout << i <<endl;
// // // // //  }
// // // // //  return 0;


// // // // // }

